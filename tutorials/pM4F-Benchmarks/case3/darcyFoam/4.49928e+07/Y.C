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
    location    "4.49928e+07";
    object      Y.C;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 0 0 0 0 0 0];

internalField   nonuniform List<scalar> 
80
(
0.0123446
0.0139378
0.0146822
0.0149755
0.0150819
0.0151191
0.0151321
0.0151367
0.0151383
0.0151389
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
