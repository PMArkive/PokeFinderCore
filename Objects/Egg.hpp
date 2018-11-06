/*
 * This file is part of PokéFinderCore
 * Copyright (C) 2017 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
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

#ifndef EGG_HPP
#define EGG_HPP

#include <QVector>
#include <PokeFinderCore/Objects/Method.hpp>
#include <PokeFinderCore/Objects/FrameCompare.hpp>
#include <PokeFinderCore/RNG/IRNG.hpp>

class Egg
{

protected:
    u16 psv;
    u16 sid;
    u16 tid;
    Method frameType = Method::EBred;
    u32 seed;
    u32 initialFrame;
    u32 maxResults;
    u32 everstoneNature;

public:
    void setEverstoneNature(const u32 &value);
    u32 getSeed() const;
    void setSeed(const u32 &value);

};

#endif // EGG_HPP
