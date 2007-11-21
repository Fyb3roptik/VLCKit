/*****************************************************************************
 * VLCMediaDiscoverer.m: VLC.framework VLCMediaDiscoverer implementation
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 the VideoLAN team
 * $Id$
 *
 * Authors: Pierre d'Herbemont <pdherbemont # videolan.org>
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>
#import "VLCMediaLibrary.h"
#import "VLCLibrary.h"
#import "VLCLibVLCBridging.h"

#include <vlc/libvlc.h>

static VLCMediaLibrary * sharedMediaLibrary = nil;

@implementation VLCMediaLibrary
+ (id)sharedMediaLibrary
{
    if(!sharedMediaLibrary)
    {
        sharedMediaLibrary = [[VLCMediaLibrary alloc] init];
    }
    return sharedMediaLibrary;
}

- (id)init
{
    if (self = [super init])
    {
        libvlc_exception_t p_e;
        libvlc_exception_init( &p_e );
        mlib = libvlc_media_library_new( [VLCLibrary sharedInstance], &p_e );
        quit_on_exception( &p_e );
        
        libvlc_media_library_load(mlib, &p_e);
        quit_on_exception(&p_e);
        allMedia = nil;
    }
    return self;
}

- (void)dealloc
{
    [allMedia release];
    
    libvlc_media_library_release(mlib);
    mlib = nil;     // make sure that the pointer is dead
    
    [super dealloc];
}

- (VLCMediaList *)allMedia
{
    if (!allMedia)
    {
        libvlc_media_list_t *p_mlist = libvlc_media_library_media_list(mlib, NULL);
        allMedia = [[VLCMediaList medialistWithLibVLCMediaList: p_mlist] retain];
        libvlc_media_list_release(p_mlist);
    }
    return allMedia;
}
@end
