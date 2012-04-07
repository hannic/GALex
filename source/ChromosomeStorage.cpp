
/*! \file ChromosomeStorage.cpp
    \brief This file contains implementation of classes that is used for storing chromosomes and data about chromosomes.
*/

/*
 * 
 * website: http://www.coolsoft-sd.com/
 * contact: support@coolsoft-sd.com
 *
 */

#include "ChromosomeStorage.h"

namespace Population
{

	// Cleans storage object
	void GaChromosomeStorage::Clear()
	{
		_fitness[ GAFT_RAW ]->Clear();
		if( !_fitness[ GAFT_SCALED ].IsNull() )
			_fitness[ GAFT_SCALED ]->Clear();

		_flags.ClearAllFlags();
		SetParent( NULL );
	}

} // Population
