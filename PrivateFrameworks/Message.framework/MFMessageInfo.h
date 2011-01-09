/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface MFMessageInfo : NSObject 
{
    unsigned long long _generationNumber;
    NSUInteger _uid;
    NSUInteger _dateReceivedInterval;
    NSUInteger _conversationHash;
    NSUInteger _mailboxID;
    NSUInteger _retainCount;
    BOOL _read;
    BOOL _deleted;
    BOOL _uidIsLibraryID;
    BOOL _hasAttachments;
}

@property(readonly) unsigned long long generationNumber;
@property BOOL deleted;
@property(getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property BOOL uidIsLibraryID;
@property BOOL read;
@property NSUInteger mailboxID;
@property NSUInteger conversationHash;
@property NSUInteger dateReceivedInterval;
@property NSUInteger uid;


- (void)setRead:(BOOL)arg1;
- (BOOL)read;
- (void)setDeleted:(BOOL)arg1;
- (BOOL)deleted;
- (NSInteger)generationCompare:(id)arg1;
- (BOOL)isKnownToHaveAttachments;
- (BOOL)uidIsLibraryID;
- (NSUInteger)dateReceivedInterval;
- (void)setDateReceivedInterval:(NSUInteger)arg1;
- (void)setConversationHash:(NSUInteger)arg1;
- (void)setKnownToHaveAttachments:(BOOL)arg1;
- (NSUInteger)conversationHash;
- (unsigned long long)generationNumber;
- (void)setUidIsLibraryID:(BOOL)arg1;
- (void)setMailboxID:(NSUInteger)arg1;
- (void)setUid:(NSUInteger)arg1;
- (NSUInteger)mailboxID;
- (NSUInteger)uid;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;

@end