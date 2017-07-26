//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFlightOrderPassengerCell, CTFlightOrderPassengerCellViewModel, CTFlightPassengerNode, NSIndexPath;

@protocol CTFlightOrderPassengerCellDelegate <NSObject>
- (long long)getChildEnableBookAdultTicketTypeByOrderPassengerCell;
- (void)flightOrderPassengerCell:(CTFlightOrderPassengerCell *)arg1 didCloseBeforeCorrectView:(CTFlightPassengerNode *)arg2;
- (void)flightOrderPassengerCell:(CTFlightOrderPassengerCell *)arg1 didTapedWithPersonNode:(CTFlightPassengerNode *)arg2;
- (void)flightOrderPassengerCell:(CTFlightOrderPassengerCell *)arg1 didChangePersonTicketType:(CTFlightOrderPassengerCellViewModel *)arg2;
- (void)showRefundAndChangeInfoForTicketType:(long long)arg1;
- (void)flightOrderPassengerCell:(CTFlightOrderPassengerCell *)arg1 tryDeletePassenger:(NSIndexPath *)arg2;
@end
