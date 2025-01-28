// This file is part of Noteahead.
// Copyright (C) 2025 Jussi Lind <jussi.lind@iki.fi>
//
// Noteahead is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// Noteahead is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Noteahead. If not, see <http://www.gnu.org/licenses/>.

#ifndef PLAY_ORDER_HPP
#define PLAY_ORDER_HPP

#include <cstddef>
#include <map>

class QXmlStreamWriter;

namespace noteahead {

class PlayOrder
{
public:
    PlayOrder();

    size_t length() const;

    void setPatternAtPosition(size_t position, size_t pattern);

    size_t positionToPattern(size_t position) const;

    void serializeToXml(QXmlStreamWriter & writer) const;

private:
    std::map<size_t, size_t> m_positionToPatternMap;
};

} // namespace noteahead

#endif // PLAY_ORDER_HPP
