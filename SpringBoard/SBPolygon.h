/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBPolygon : NSObject
{
    int m_pointCount;
    struct CGPoint m_points[5];
    unsigned int m_pathIDs[5];
    CGFloat m_weights[5];
    struct CGPoint m_centroid;
    struct CGPoint m_weightedCentroid;
    unsigned int m_baseLeftVertex;
    unsigned int m_bottomRightVertex;
}

+ (BOOL)candidate:(id)arg1 matchesTemplate:(id)arg2 transforms:(int)arg3 acceptFactor:(CGFloat)arg4;
@property(nonatomic) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=m_weightedCentroid;
@property(nonatomic) struct CGPoint centroid; // @synthesize centroid=m_centroid;
@property(readonly, nonatomic) int pointCount; // @synthesize pointCount=m_pointCount;
- (CGFloat)meanRadius;
- (CGFloat)meanFingertipRowAngle;
- (CGFloat)baseOrientation;
- (struct CGPoint)calculateWeightedCentroid;
- (struct CGPoint)calculateCentroid;
- (CGFloat)findLongestOutsideEdge;
- (void)sortAlongOutsideEdge;
- (void)flipHorizontally;
- (void)scale:(CGFloat)arg1;
- (void)rotate:(CGFloat)arg1;
- (unsigned int)thumbIndex;
@property(readonly, nonatomic) BOOL isLeftHanded;
- (CGFloat)height;
- (CGFloat)width;
- (CGFloat)weightAtIndex:(int)arg1;
- (void)endPointUpdate;
- (void)addPoint:(struct CGPoint)arg1 pathIndex:(unsigned int)arg2;
- (void)addPoint:(struct CGPoint)arg1;
- (void)beginPointUpdate;
- (void)clear;
- (void)makeLike:(id)arg1;
- (void)commonInit;

@end

