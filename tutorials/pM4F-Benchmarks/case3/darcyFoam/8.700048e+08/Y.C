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
    location    "8.700048e+08";
    object      Y.C;
}
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

dimensions      [0 0 0 0 0 0 0];

internalField   nonuniform List<scalar> 
80
(
0.00997043
0.00997043
0.00997043
0.00997043
0.00997043
0.00998846
0.0101727
0.0106899
0.0116752
0.0130034
0.0140959
0.0146966
0.0149648
0.0150726
0.015114
0.0151296
0.0151355
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
