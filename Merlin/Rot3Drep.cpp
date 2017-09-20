/////////////////////////////////////////////////////////////////////////
//
// Merlin C++ Class Library for Charged Particle Accelerator Simulations
//
// Class library version 3 (2004)
//
// Copyright: see Merlin/copyright.txt
//
// Last CVS revision:
// $Date: 2004/12/13 08:38:54 $
// $Revision: 1.2 $
//
/////////////////////////////////////////////////////////////////////////

#include "Rot3Drep.h"
#include "IdentityRotation.h"
#include "GeneralRotation.h"
#include "AxisRotations.h"

Rot3Drep::Rot3Drep ()
	: refc(0)
{}

Rot3Drep::~Rot3Drep ()
{}

bool Rot3Drep::isIdentity () const
{
	return false;
}

bool Rot3Drep::isXrot () const
{
	return false;
}

bool Rot3Drep::isYrot () const
{
	return false;
}

bool Rot3Drep::isZrot () const
{
	return false;
}

Rot3Drep* Rot3Drep::identity ()
{
	return new IdentityRotation;
}

Rot3Drep* Rot3Drep::rotationX (double angle)
{
	if(angle==0)
	{
		return new IdentityRotation;
	}
	else
	{
		return new RotationX(angle);
	}
}

Rot3Drep* Rot3Drep::rotationY (double angle)
{
	if(angle==0)
	{
		return new IdentityRotation;
	}
	else
	{
		return new RotationY(angle);
	}
}

Rot3Drep* Rot3Drep::rotationZ (double angle)
{
	if(angle==0)
	{
		return new IdentityRotation;
	}
	else
	{
		return new RotationZ(angle);
	}
}