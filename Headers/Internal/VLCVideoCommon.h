/*****************************************************************************
 * VLCVideoCommon.h: VLC.framework VLCVideoCommon header
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 the VideoLAN team
 * $Id: VLCVideoCommon.h 23915 2007-12-28 22:20:19Z pdherbemont $
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

#import <QuartzCore/QuartzCore.h>

@interface VLCVideoLayoutManager : NSObject
{
    CGSize originalVideoSize;
    BOOL  fillScreenEntirely;
}
@property BOOL  fillScreenEntirely;
@property CGSize originalVideoSize;

+ (id)layoutManager;

@end
/*****************************************************************************
 * VLCVideoCommon.h: VLC.framework VLCVideoCommon header
 *****************************************************************************
 * Copyright (C) 2007 Pierre d'Herbemont
 * Copyright (C) 2007 the VideoLAN team
 * $Id: VLCVideoCommon.h 23915 2007-12-28 22:20:19Z pdherbemont $
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

#import <QuartzCore/QuartzCore.h>

@interface VLCVideoLayoutManager : NSObject
{
    CGSize originalVideoSize;
    BOOL  fillScreenEntirely;
}
@property BOOL  fillScreenEntirely;
@property CGSize originalVideoSize;

+ (id)layoutManager;

@end
