//
//  WMSTileOverlay.h
//  WMSOnMapKit
//
//  Created by Stanislav Sumbera on 17/05/14.
//  Copyright (c) 2014 sumbera. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface WMSTileOverlay : MKTileOverlay

@property (nonatomic, strong) NSString * url;
@property (nonatomic, assign) float      opacity;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, assign) BOOL       useMercator; // -- if use 900913 mercator projection or WGS84

//------------------------------------------------------------
- (id)initWithName:(NSString*)nameArg
               Url:(NSString*)urlArg
           Opacity: (CGFloat) opacityArg
       UseMercator: (BOOL) useMercatorArg;
@end
