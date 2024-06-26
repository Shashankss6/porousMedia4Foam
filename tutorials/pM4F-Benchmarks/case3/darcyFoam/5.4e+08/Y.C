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
    location    "5.4e+08";
    object      Y.C;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 0 0 0 0 0 0];

internalField   nonuniform List<scalar> 
80
(
0.00997043
0.00997201
0.0100837
0.0105171
0.0114531
0.012828
0.0140194
0.0146754
0.0149619
0.0150738
0.0151152
0.0151304
0.0151359
0.015138
0.0151388
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
