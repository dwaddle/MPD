/*
 * Copyright (C) 2003-2012 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_COMMAND_ERROR_HXX
#define MPD_COMMAND_ERROR_HXX

#include "command.h"
#include "playlist_error.h"
#include "gerror.h"

class Client;

enum command_return
print_playlist_result(Client *client, enum playlist_result result);

/**
 * Send the GError to the client and free the GError.
 */
enum command_return
print_error(Client *client, GError *error);

#endif
