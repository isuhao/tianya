/*
  Copyright (c) 2011-2012 - Tőkés Attila

  This file is part of SmtpClient for Qt.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  See the LICENSE file for more details.
*/

#pragma once

#include <string>

class EmailAddress
{
public:

    /* [1] Constructors and Destructors */

    EmailAddress();
    EmailAddress(const std::string & address, const std::string & name="");

    ~EmailAddress();

    /* [1] --- */


    /* [2] Getters and Setters */
    void setName(const std::string & name);
    void setAddress(const std::string & address);

    const std::string & getName() const;
    const std::string & getAddress() const;

    /* [2] --- */


private:

    /* [3] Private members */

    std::string name;
    std::string address;

    /* [3] --- */
};

