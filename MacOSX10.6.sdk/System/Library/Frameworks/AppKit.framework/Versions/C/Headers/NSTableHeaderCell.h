/*
        NSTableHeaderCell.h
        Application Kit
        Copyright (c) 1995-2009, Apple Inc.
        All rights reserved.
*/
#import <AppKit/NSTextFieldCell.h>

@interface NSTableHeaderCell : NSTextFieldCell {

}

/* Draws a sorting indicator given a cellFrame. If priority is 0, this is the primary sort indicator. If ascending is YES, a "^" indicator will be drawn.  Override this routine to customimze the sorting UI.
*/
- (void)drawSortIndicatorWithFrame:(NSRect)cellFrame inView:(NSView *)controlView ascending:(BOOL)ascending priority:(NSInteger)priority AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER;

/* Returns the location to display the sorting indicator given the cellFrame.
*/
- (NSRect)sortIndicatorRectForBounds:(NSRect)theRect AVAILABLE_MAC_OS_X_VERSION_10_3_AND_LATER;

@end
