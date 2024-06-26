/*--------------------------------*- C++ -*----------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Version:  7
     \\/     M anipulation  |
\*---------------------------------------------------------------------------*/
FoamFile
{
    version     2.0;
    format      ascii;
    class       volScalarField;
    location    "1.049976e+08";
    object      Y.C;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 0 0 0 0 0 0];

internalField   nonuniform List<scalar> 
80
(
0.0118917
0.0135289
0.0144729
0.0148898
0.0150501
0.0151078
0.0151281
0.0151353
0.0151378
0.0151387
0.015139
0.0151391
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
0.0151392
)
;

boundaryField
{
    outlet
    {
        type            zeroGradient;
    }
    inlet
    {
        type            fixedValue;
        value           uniform 0.00997043;
    }
    frontAndBack
    {
        type            empty;
    }
}


// ************************************************************************* //
