/*
* Copyright 2009, 2010, The Pink Petal Development Team.
* The Pink Petal Devloment Team are defined as the game's coders
* who meet on http://pinkpetal.org     // old site: http://pinkpetal .co.cc
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "DirPath.h"
#include "cInterfaceWindow.h"
#include "InterfaceGlobals.h"

class cScreenPreparingGame : public cInterfaceWindowXML
{
private:
	static bool ids_set;	// --- interface/event IDs --- //
	int prep_id;
	int brothel_id;
	int pname_id;
	int psname_id;
	int cancel_id;

	int counter1_id;
	int counter2_id;
	int counter3_id;
	int counter4_id;
	int counter5_id;

	int text1_id;
	int text2_id;
	int text3_id;
	int text4_id;
	int text5_id;

	void set_ids();
public:
	cScreenPreparingGame();

	void init();
	void process();
	void resetScreen();
	void clearall();
	void loadFailed();
	void stringEmUp();

	void Free() { cInterfaceWindow::Free(); }
};