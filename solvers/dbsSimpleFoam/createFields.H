Info<< "Reading field p\n" << endl;
volScalarField p
(
    IOobject
    (
        "p",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

Info<< "Reading field U\n" << endl;
volVectorField U
(
    IOobject
    (
        "U",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

#include "createPhi.H"


label pRefCell = 0;
scalar pRefValue = 0.0;
setRefCell(p, simple.dict(), pRefCell, pRefValue);
mesh.setFluxRequired(p.name());

Info<< "Reading field sourceTerm\n" << endl;
volScalarField sourceTerm
(
    IOobject
    (
        "sourceTerm",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

Info << "Reading transportProperties\n" << endl;

singlePhaseTransportModel laminarTransport(U, phi);


IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);


porousModel porousMedia(mesh,transportProperties);


Info << nl << "Reading/generating porosity field eps" << endl;
const volScalarField & eps = porousMedia.porosity();

Info << nl << "Reading/generating permeability field eps" << endl;
const volScalarField& invK = porousMedia.invK();

#include "createFvOptions.H"


Switch activateHeleShaw
(
    transportProperties.lookupOrDefault<Switch>("activateHeleShaw",false)
);


volScalarField HeleShawCorrection ("HeleShawCorrection", 0.0*invK);

if (activateHeleShaw)
{
    Foam::absolutePermeabilityModels::HeleShaw HeleShaw(mesh,transportProperties);
    HeleShawCorrection = HeleShaw.inversePermeability();
    Info << "HeleShaw correction is activated" << nl << endl;
}
