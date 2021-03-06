//
//  GJGCChatFirendBaseCell.h
//  ZYChat
//
//  Created by ZYVincent on 14-11-10.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import "GJGCChatBaseCell.h"
#import "GJGCChatFriendContentModel.h"

#define simpleContentDiffHeight 8
#define simpleContentDiffWidth 7

@interface GJGCChatFriendBaseCell : GJGCChatBaseCell

@property (nonatomic,strong)GJGCCommonHeadView *headView;

@property (nonatomic,strong)UIImageView *bubbleBackImageView;

@property (nonatomic,strong)GJCFCoreTextContentView *timeLabel;

@property (nonatomic,strong)GJCFCoreTextContentView *nameLabel;

@property (nonatomic,assign)CGFloat contentBordMargin;

@property (nonatomic,assign)CGFloat cellMargin;

@property (nonatomic,assign)BOOL isFromSelf;

@property (nonatomic,strong)UIButton *statusButton;

@property (nonatomic,assign)GJGCChatFriendSendMessageStatus sendStatus;

@property (nonatomic,assign)CGFloat statusButtonOffsetAudioDuration;

@property (nonatomic,assign)BOOL isGroupChat;

@property (nonatomic,assign)NSInteger faildType;

@property (nonatomic,strong)NSString  *faildReason;

@property (nonatomic,assign)GJGCChatFriendTalkType talkType;

@property (nonatomic,assign)GJGCChatFriendContentType contentType;

@property (nonatomic,strong)UIImageView *sexIconView;


- (void)adjustContent;

- (NSArray *)myAudioPlayIndicatorImages;

- (NSArray *)otherAudioPlayIndicatorImages;

- (void)startSendingAnimation;

- (void)successSendingAnimation;

- (void)faildSendingAnimation;

- (void)faildWithType:(NSInteger)faildType andReason:(NSString *)reason;

- (void)goToShowLongPressMenu:(UILongPressGestureRecognizer *)sender;

- (void)copyContent:(UIMenuItem *)item;

- (void)deleteMessage:(UIMenuItem *)item;

- (void)reSendMessage;

@end
