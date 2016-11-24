/**
 ** This file is part of BoneOS.
 **
 **   BoneOS is free software: you can redistribute it and/or modify
 **   it under the terms of the GNU General Public License as published by
 **   the Free Software Foundation, either version 3 of the License, or
 **   (at your option) any later version.

 **   BoneOS is distributed in the hope that it will be useful,
 **   but WITHOUT ANY WARRANTY; without even the implied warranty of
 **   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **   GNU General Public License for more details.

 **   You should have received a copy of the GNU General Public License
 **   along with BoneOS.  If not, see <http://www.gnu.org/licenses/>.
 **
 **  @main_author : Amanuel Bogale
 **  
 **  @contributors:

 **     Amanuel Bogale <amanuel2> : start
 **/  

#include <misc/status_codes.h>
#include <term/terminal.h>
#include <cls/color.h>

struct cmd_opt* cmd_cls_opts[] = 
{
  &cmd_cls_opt_color,
  0
};

int cmd_cls_default_handler()
{
    return STATUS_OK;
}

struct cmd cmd_cls = 
{
  .command_name = "cls",
  .usage = "cls [--help]  [--color <fg-color> <bg-color>]   [--color <--help>] ",
  .help = "cls(1) \t BoneOS Terminal Manual \n "
                "NAME : \n"
                "\tcls\n"
                "SYNOPSIS : \n "
                "\tcls [--help]  [--color <fg-color> <bg-color>] [--color <--help>] "
                "DESCRIPTION : \n "
                "\tClears the terminal. Possible to specifiy the"
                "\tcolor with the --color command and providing it "
                "\ta Foreground as well as a Background Color" ,   
  .cmd_opts =  cmd_cls_opts,
  .handler = &cmd_cls_default_handler                     
};

void cls_init()
{
}