#ifndef _SubtitleFormat_h
#define _SubtitleFormat_h

/*
 *	subtitleeditor -- a tool to create or edit subtitle
 *
 *	http://home.gna.org/subtitleeditor/
 *	https://gna.org/projects/subtitleeditor/
 *
 *	Copyright @ 2005-2009, kitone
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "extension.h"
#include "subtitleformatio.h"

/*
 *
 */
class SubtitleFormat : public Extension
{
public:

	/*
	 *
	 */
	virtual SubtitleFormatInfo get_info() = 0;

	/*
	 *
	 */
	virtual SubtitleFormatIO* create() = 0;
};

#endif//_SubtitleFormat_h
