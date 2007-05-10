/* -*- mode:c++ -*- ********************************************************
 * file:        BaseWorldUtility.h
 *
 * author:      Tom Parker
 *
 * copyright:   (C) 2007 Parallel and Distributed Systems Group (PDS) at
 *              Technische Universiteit Delft, The Netherlands.
 *
 *              This program is free software; you can redistribute it 
 *              and/or modify it under the terms of the GNU General Public 
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later 
 *              version.
 *              For further information see file COPYING 
 *              in the top level directory
 ***************************************************************************
 * description: basic world utility class
 *              provides world-required values
 **************************************************************************/

#ifndef BASE_WORLD_UTIL_H
#define BASE_WORLD_UTIL_H

#include <BaseModule.h>
#include "Coord.h"

class BaseWorldUtility : public BaseModule
{
protected:
	/** @brief x and y size of the area the nodes are in (in meters)*/
    Coord playgroundSize;
public:
	Module_Class_Members(BaseWorldUtility,BaseModule,0);

	void initialize(int stage);

    /** @brief Returns the playgroundSize*/
    const Coord* getPgs(){
        return &playgroundSize;
    };

	/* @brief Random position somewhere in the playground */
	Coord getRandomPosition();

    /** @brief Speed of light */
    static const double speedOfLight;
 };

#endif
