/*
 * This file is part of libPok�Finder
 * Copyright (C) 2017 by Admiral_Fish and bumba
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef PROFILE3_HPP
#define PROFILE3_HPP

#include <libPokeFinder/Objects/Profile.hpp>
#include <QList>
#include <QStandardItemModel>

class Profile3 : public Profile
{

public:
    u32 tid;
    u32 sid;
    bool deadBattery;

    Profile3(QString profileName, int version, u32 tid, u32 sid, int language = 0, bool deadBattery = false, bool valid = false);
    void saveProfile();
    void deleteProfile();
    static Profile3& loadProfile(QString profileName);
    static vector<QList<QStandardItem *>>& loadProfiles();
    static vector<Profile3>& loadProfileList();
    static QString getVersion(int i);
    static QString getLanguage(int i);
    static int getVersionIndex(QString s);
    static int getLanguageIndex(QString s);

};

#endif // PROFILE3_HPP
