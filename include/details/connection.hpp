// xiva (acronym for HTTP Extended EVent Automata) is a simple HTTP server.
// Copyright (C) 2009 Yandex <highpower@yandex.ru>

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef XIVA_DETAILS_CONNECTION_HPP_INCLUDED
#define XIVA_DETAILS_CONNECTION_HPP_INCLUDED

#include "xiva/shared.hpp"
#include "xiva/forward.hpp"
#include "details/connection_base.hpp"

namespace xiva { namespace details {

class connection : public shared, public connection_base {

public:
	connection();
	virtual ~connection();

private:
	connection(connection const &);
	connection& operator = (connection const &);
};


}} // namespaces

#endif // XIVA_DETAILS_CONNECTION_HPP_INCLUDED
