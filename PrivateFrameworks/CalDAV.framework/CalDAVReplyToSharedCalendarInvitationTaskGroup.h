/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, CalDAVCalendarServerInviteNotificationItem, <CoreDAVTaskGroupDelegate>;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    BOOL _acceptInvitation;
    NSURL *_calendarHomeURL;
    CalDAVCalendarServerInviteNotificationItem *_invitation;
    NSURL *_sharedAs;
}

@property BOOL acceptInvitation;
@property(retain) NSURL * calendarHomeURL;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) CalDAVCalendarServerInviteNotificationItem * invitation;
@property(retain) NSURL * sharedAs;

- (BOOL)acceptInvitation;
- (id)calendarHomeURL;
- (void)dealloc;
- (id)description;
- (id)generateReply;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)invitation;
- (void)setAcceptInvitation:(BOOL)arg1;
- (void)setCalendarHomeURL:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setSharedAs:(id)arg1;
- (id)sharedAs;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;

@end