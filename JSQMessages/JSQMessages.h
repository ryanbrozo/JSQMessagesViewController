//
//  JSQMessages.h
//  JSQMessages
//
//  Created by Ryan Brozo on 18/08/2016.
//
//

#import <UIKit/UIKit.h>

//! Project version number for JSQMessages.
FOUNDATION_EXPORT double JSQMessagesVersionNumber;

//! Project version string for JSQMessages.
FOUNDATION_EXPORT const unsigned char JSQMessagesVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JSQMessages/PublicHeader.h>


#import "JSQMessagesViewController.h"

//  Views
#import "JSQMessagesCollectionView.h"
#import "JSQMessagesCollectionViewCell.h"
#import "JSQMessagesCollectionViewCellIncoming.h"
#import "JSQMessagesCollectionViewCellOutgoing.h"
#import "JSQMessagesTypingIndicatorFooterView.h"
#import "JSQMessagesLoadEarlierHeaderView.h"
#import "JSQMessagesMediaPlaceholderView.h"

//  Layout
#import "JSQMessagesBubbleSizeCalculating.h"
#import "JSQMessagesBubblesSizeCalculator.h"
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "JSQMessagesCollectionViewLayoutAttributes.h"
#import "JSQMessagesCollectionViewFlowLayoutInvalidationContext.h"
#import "JSQAudioMediaViewAttributes.h"

//  Toolbar
#import "JSQMessagesComposerTextView.h"
#import "JSQMessagesInputToolbar.h"
#import "JSQMessagesToolbarContentView.h"

//  Model
#import "JSQMessage.h"

#import "JSQMediaItem.h"
#import "JSQAudioMediaItem.h"
#import "JSQPhotoMediaItem.h"
#import "JSQLocationMediaItem.h"
#import "JSQVideoMediaItem.h"

#import "JSQMessagesBubbleImage.h"
#import "JSQMessagesAvatarImage.h"

#import "JSQAudioMediaViewAttributes.h"

//  Protocols
#import "JSQMessageData.h"
#import "JSQMessageMediaData.h"
#import "JSQMessageAvatarImageDataSource.h"
#import "JSQMessageBubbleImageDataSource.h"
#import "JSQMessagesCollectionViewDataSource.h"
#import "JSQMessagesCollectionViewDelegateFlowLayout.h"

//  Factories
#import "JSQMessagesAvatarImageFactory.h"
#import "JSQMessagesBubbleImageFactory.h"
#import "JSQMessagesMediaViewBubbleImageMasker.h"
#import "JSQMessagesTimestampFormatter.h"
#import "JSQMessagesToolbarButtonFactory.h"

//  Categories
#import "JSQSystemSoundPlayer+JSQMessages.h"
#import "NSString+JSQMessages.h"
#import "UIColor+JSQMessages.h"
#import "UIImage+JSQMessages.h"
#import "UIView+JSQMessages.h"
#import "NSBundle+JSQMessages.h"
