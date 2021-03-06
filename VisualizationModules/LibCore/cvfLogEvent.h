//##################################################################################################
//
//   Custom Visualization Core library
//   Copyright (C) 2011-2012 Ceetron AS
//    
//   This library is free software: you can redistribute it and/or modify 
//   it under the terms of the GNU General Public License as published by 
//   the Free Software Foundation, either version 3 of the License, or 
//   (at your option) any later version. 
//    
//   This library is distributed in the hope that it will be useful, but WITHOUT ANY 
//   WARRANTY; without even the implied warranty of MERCHANTABILITY or 
//   FITNESS FOR A PARTICULAR PURPOSE.   
//    
//   See the GNU General Public License at <<http://www.gnu.org/licenses/gpl.html>> 
//   for more details. 
//
//##################################################################################################

#pragma once

#include "cvfObject.h"
#include "cvfString.h"
#include "cvfLogger.h"

namespace cvf {


//==================================================================================================
//
// 
//
//==================================================================================================
class LogEvent
{
public:
    LogEvent();
    LogEvent(const String& source, const String& message, Logger::Level level, const CodeLocation& codeLocation);
    LogEvent(const LogEvent& other);

    const LogEvent& operator=(LogEvent rhs);

    const String&       source() const;
    Logger::Level       level() const;
    const String&       message() const;
    const CodeLocation& location() const;

private:
    void                swap(LogEvent& other);

private:
    String          m_source;
    String          m_message;
    Logger::Level   m_level;
    CodeLocation    m_codeLocation;
};



} // cvf


