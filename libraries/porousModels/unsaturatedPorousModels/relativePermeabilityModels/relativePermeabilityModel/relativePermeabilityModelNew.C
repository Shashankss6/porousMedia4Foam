/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2016 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "relativePermeabilityModel.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

Foam::autoPtr<Foam::relativePermeabilityModel> Foam::relativePermeabilityModel::New
(
    const word& name,
    const dictionary& dict,
    const volScalarField& Sb,
    const autoPtr<reducedSaturationModel> & reducedSaturationModelPtr
)
{
    const word modelType(dict.lookup("relativePermeabilityModel"));

    Info<< "Selecting relativePermeability model => " << modelType << "\n" << endl;

    dictionaryConstructorTable::iterator cstrIter =
        dictionaryConstructorTablePtr_->find(modelType);

    if (cstrIter == dictionaryConstructorTablePtr_->end())
    {
        FatalErrorIn
            (
                "relativePermeabilityModel::New(const word&,const dictionary&,const volScalarField&)"
            )   << "Unknown relativePermeabilityModel type "
                << modelType << nl << nl
                << "Valid relativePermeabilityModels are : " << endl
                << dictionaryConstructorTablePtr_->sortedToc()
                << exit(FatalError);
    }

    return autoPtr<relativePermeabilityModel>
        (cstrIter()(name, dict,Sb,reducedSaturationModelPtr));
}


// ************************************************************************* //
