




























typedef unsigned short UChar;



















extern int MCLogEnabled;
    void MCLogInternal(const char * user,
                       const char * filename,
                       unsigned int line,
                       int dumpStack,
                       const char * format, ...) ;
 void MCAssertInternal(const char * filename, unsigned int line, int cond, const char * condString) __attribute__((analyzer_noreturn));











    struct mailimap_body_fields;
    struct mailimap_body_ext_1part;
    struct mailimf_address;
    struct mailimf_mailbox;
    struct mailimap_address;
    struct mailmime;
    struct mailmime_mechanism;
    struct mailimap_namespace_item;
    struct mailimap_namespace_info;
    struct mailimap_body;
    struct mailimap_body_fields;
    struct mailimap_body_ext_1part;
    struct mailimap_body_type_1part;
    struct mailimap_body_type_basic;
    struct mailimap_body_type_text;
    struct mailimap_body_type_mpart;
    struct mailimap_body_type_msg;
    typedef struct mailimap mailimap;
    struct mailimap_set;
    struct mailimap_date_time;
    struct mailimf_fields;
    struct mailimap_envelope;
    typedef struct mailpop3 mailpop3;
    typedef struct mailsmtp mailsmtp;
    typedef struct newsnntp newsnntp;
    struct mailsem;



































typedef void * UDateFormat;











@interface MCOObjectWrapper : NSObject







@end
@interface NSData (MCO)







@end
@interface NSString (MCO)
- (NSString *) mco_flattenHTML;
- (NSString *) mco_flattenHTMLAndShowBlockquote:(BOOL)showBlockquote;
- (NSString *) mco_flattenHTMLAndShowBlockquote:(BOOL)showBlockquote showLink:(BOOL)showLink;

- (NSString *) mco_htmlEncodedString;
- (NSString *) mco_cleanedHTMLString;
- (NSString *) mco_strippedWhitespace;

@end
@interface NSDictionary (MCO)







@end
@interface NSArray (MCO)







@end
@interface NSObject (MCO)







@end
@interface NSError (MCO)



@end
@interface NSValue (MCO)







@end
@interface MCOOperation : NSObject


@property (readonly) BOOL isCancelled;


@property (nonatomic, assign) BOOL shouldRunWhenCancelled;







@property (nonatomic, assign) dispatch_queue_t callbackDispatchQueue;




- (void) operationCompleted;


- (void) cancel;

@end

@interface MCOOperation (MCOUnavailable)

- (instancetype) init NS_UNAVAILABLE;

@end





typedef NS_OPTIONS(NSInteger, MCOConnectionType) {

    MCOConnectionTypeClear = 1 << 0,


    MCOConnectionTypeStartTLS = 1 << 1,

    MCOConnectionTypeTLS = 1 << 2,
};


typedef NS_OPTIONS(NSInteger, MCOAuthType) {

    MCOAuthTypeSASLNone = 0,

    MCOAuthTypeSASLCRAMMD5 = 1 << 0,

    MCOAuthTypeSASLPlain = 1 << 1,

    MCOAuthTypeSASLGSSAPI = 1 << 2,

    MCOAuthTypeSASLDIGESTMD5 = 1 << 3,

    MCOAuthTypeSASLLogin = 1 << 4,

    MCOAuthTypeSASLSRP = 1 << 5,

    MCOAuthTypeSASLNTLM = 1 << 6,

    MCOAuthTypeSASLKerberosV4 = 1 << 7,

    MCOAuthTypeXOAuth2 = 1 << 8,

    MCOAuthTypeXOAuth2Outlook = 1 << 9,
};


typedef NS_OPTIONS(NSInteger, MCOIMAPFolderFlag) {
    MCOIMAPFolderFlagNone = 0,

    MCOIMAPFolderFlagMarked = 1 << 0,

    MCOIMAPFolderFlagUnmarked = 1 << 1,

    MCOIMAPFolderFlagNoSelect = 1 << 2,

    MCOIMAPFolderFlagNoInferiors = 1 << 3,

    MCOIMAPFolderFlagInbox = 1 << 4,

    MCOIMAPFolderFlagSentMail = 1 << 5,

    MCOIMAPFolderFlagStarred = 1 << 6,

    MCOIMAPFolderFlagAllMail = 1 << 7,

    MCOIMAPFolderFlagTrash = 1 << 8,

    MCOIMAPFolderFlagDrafts = 1 << 9,

    MCOIMAPFolderFlagSpam = 1 << 10,

    MCOIMAPFolderFlagImportant = 1 << 11,

    MCOIMAPFolderFlagArchive = 1 << 12,

    MCOIMAPFolderFlagAll = MCOIMAPFolderFlagAllMail,

    MCOIMAPFolderFlagJunk = MCOIMAPFolderFlagSpam,

    MCOIMAPFolderFlagFlagged = MCOIMAPFolderFlagStarred,

    MCOIMAPFolderFlagFolderTypeMask = MCOIMAPFolderFlagInbox | MCOIMAPFolderFlagSentMail | MCOIMAPFolderFlagStarred | MCOIMAPFolderFlagAllMail |
      MCOIMAPFolderFlagTrash| MCOIMAPFolderFlagDrafts | MCOIMAPFolderFlagSpam | MCOIMAPFolderFlagImportant | MCOIMAPFolderFlagArchive,
};


typedef NS_OPTIONS(NSInteger, MCOMessageFlag) {
    MCOMessageFlagNone = 0,

    MCOMessageFlagSeen = 1 << 0,

    MCOMessageFlagAnswered = 1 << 1,

    MCOMessageFlagFlagged = 1 << 2,

    MCOMessageFlagDeleted = 1 << 3,

    MCOMessageFlagDraft = 1 << 4,

    MCOMessageFlagMDNSent = 1 << 5,

    MCOMessageFlagForwarded = 1 << 6,

    MCOMessageFlagSubmitPending = 1 << 7,

    MCOMessageFlagSubmitted = 1 << 8,
};


typedef NS_ENUM(NSInteger, MCOEncoding) {

    MCOEncoding7Bit = 0,

    MCOEncoding8Bit = 1,

    MCOEncodingBinary = 2,

    MCOEncodingBase64 = 3,

    MCOEncodingQuotedPrintable = 4,

    MCOEncodingOther = 5,




    MCOEncodingUUEncode = -1
};


typedef NS_OPTIONS(NSInteger, MCOIMAPMessagesRequestKind) {

    MCOIMAPMessagesRequestKindUid = 0,

    MCOIMAPMessagesRequestKindFlags = 1 << 0,

    MCOIMAPMessagesRequestKindHeaders = 1 << 1,

    MCOIMAPMessagesRequestKindStructure = 1 << 2,

    MCOIMAPMessagesRequestKindInternalDate = 1 << 3,

    MCOIMAPMessagesRequestKindFullHeaders = 1 << 4,

    MCOIMAPMessagesRequestKindHeaderSubject = 1 << 5,

    MCOIMAPMessagesRequestKindGmailLabels = 1 << 6,

    MCOIMAPMessagesRequestKindGmailMessageID = 1 << 7,

    MCOIMAPMessagesRequestKindGmailThreadID = 1 << 8,

    MCOIMAPMessagesRequestKindExtraHeaders = 1 << 9,

    MCOIMAPMessagesRequestKindSize = 1 << 10,

};


typedef NS_ENUM(NSInteger, MCOIMAPStoreFlagsRequestKind) {

    MCOIMAPStoreFlagsRequestKindAdd,

    MCOIMAPStoreFlagsRequestKindRemove,

    MCOIMAPStoreFlagsRequestKindSet,
};


typedef NS_ENUM(NSInteger, MCOIMAPSearchKind) {

    MCOIMAPSearchKindAll,

    MCOIMAPSearchKindNone,

    MCOIMAPSearchKindFrom,

    MCOIMAPSearchKindTo,

    MCOIMAPSearchKindCc,

    MCOIMAPSearchKindBcc,

    MCOIMAPSearchKindRecipient,

    MCOIMAPSearchKindSubject,

    MCOIMAPSearchKindContent,

    MCOIMAPSearchKindBody,

    MCOIMAPSearchKindUids,

    MCOIMAPSearchKindHeader,

    MCOIMAPSearchKindRead,

    MCOIMAPSearchKindUnread,

    MCOIMAPSearchKindFlagged,

    MCOIMAPSearchKindUnflagged,

    MCOIMAPSearchKindAnswered,

    MCOIMAPSearchKindUnanswered,

    MCOIMAPSearchKindDraft,

    MCOIMAPSearchKindUndraft,

    MCOIMAPSearchKindDeleted,

    MCOIMAPSearchKindSpam,

    MCOIMAPSearchKindBeforeDate,

    MCOIMAPSearchKindOnDate,

    MCOIMAPSearchKindSinceDate,

    MCOIMAPSearchKindBeforeReceivedDate,

    MCOIMAPSearchKindOnReceivedDate,

    MCOIMAPSearchKindSinceReceivedDate,

    MCOIMAPSearchKindSizeLarger,

    MCOIMAPSearchKindSizeSmaller,

    MCOIMAPSearchGmailThreadID,

    MCOIMAPSearchGmailMessageID,

    MCOIMAPSearchGmailRaw,

    MCOIMAPSearchKindOr,

    MCOIMAPSearchKindAnd,

    MCOIMAPSearchKindNot,
};
typedef NS_ENUM(NSInteger, MCOIMAPCapability) {

    MCOIMAPCapabilityACL,

    MCOIMAPCapabilityBinary,

    MCOIMAPCapabilityCatenate,

    MCOIMAPCapabilityChildren,

    MCOIMAPCapabilityCompressDeflate,

    MCOIMAPCapabilityCondstore,

    MCOIMAPCapabilityEnable,

    MCOIMAPCapabilityIdle,

    MCOIMAPCapabilityId,

    MCOIMAPCapabilityLiteralPlus,

    MCOIMAPCapabilityMultiAppend,

    MCOIMAPCapabilityNamespace,

    MCOIMAPCapabilityQResync,

    MCOIMAPCapabilityQuota,

    MCOIMAPCapabilitySort,

    MCOIMAPCapabilityStartTLS,

    MCOIMAPCapabilityThreadOrderedSubject,

    MCOIMAPCapabilityThreadReferences,

    MCOIMAPCapabilityUIDPlus,

    MCOIMAPCapabilityUnselect,

    MCOIMAPCapabilityXList,

    MCOIMAPCapabilityAuthAnonymous,

    MCOIMAPCapabilityAuthCRAMMD5,

    MCOIMAPCapabilityAuthDigestMD5,

    MCOIMAPCapabilityAuthExternal,

    MCOIMAPCapabilityAuthGSSAPI,

    MCOIMAPCapabilityAuthKerberosV4,

    MCOIMAPCapabilityAuthLogin,

    MCOIMAPCapabilityAuthNTLM,

    MCOIMAPCapabilityAuthOTP,

    MCOIMAPCapabilityAuthPlain,

    MCOIMAPCapabilityAuthSKey,

    MCOIMAPCapabilityAuthSRP,

    MCOIMAPCapabilityXOAuth2,

    MCOIMAPCapabilityGmail
};





typedef NS_ENUM(NSInteger, MCOErrorCode) {

    MCOErrorNone,


    MCOErrorConnection,

    MCOErrorTLSNotAvailable,

    MCOErrorParse,

    MCOErrorCertificate,

    MCOErrorAuthentication,

    MCOErrorGmailIMAPNotEnabled,

    MCOErrorGmailExceededBandwidthLimit,

    MCOErrorGmailTooManySimultaneousConnections,

    MCOErrorMobileMeMoved,

    MCOErrorYahooUnavailable,

    MCOErrorNonExistantFolder,

    MCOErrorRename,

    MCOErrorDelete,

    MCOErrorCreate,

    MCOErrorSubscribe,

    MCOErrorAppend,

    MCOErrorCopy,

    MCOErrorExpunge,

    MCOErrorFetch,

    MCOErrorIdle,

    MCOErrorIdentity,

    MCOErrorNamespace,

    MCOErrorStore,

    MCOErrorCapability,

    MCOErrorStartTLSNotAvailable,

    MCOErrorSendMessageIllegalAttachment,

    MCOErrorStorageLimit,

    MCOErrorSendMessageNotAllowed,

    MCOErrorNeedsConnectToWebmail,

    MCOErrorSendMessage,

    MCOErrorAuthenticationRequired,

    MCOErrorFetchMessageList,

    MCOErrorDeleteMessage,

    MCOErrorInvalidAccount,

    MCOErrorFile,

    MCOErrorCompression,

    MCOErrorNoSender,

    MCOErrorNoRecipient,

    MCOErrorNoop,


    MCOErrorGmailApplicationSpecificPasswordRequired,

    MCOErrorServerDate,

    MCOErrorNoValidServerFound,

    MCOErrorCustomCommand,

    MCOErrorYahooSendMessageSpamSuspected,

    MCOErrorYahooSendMessageDailyLimitExceeded,

    MCOErrorCodeCount,
};


typedef NS_ENUM(NSInteger, MCOConnectionLogType) {

    MCOConnectionLogTypeReceived,

    MCOConnectionLogTypeSent,

    MCOConnectionLogTypeSentPrivate,

    MCOConnectionLogTypeErrorParse,

    MCOConnectionLogTypeErrorReceived,

    MCOConnectionLogTypeErrorSent,
};







typedef void (^MCOConnectionLogger)(void * connectionID, MCOConnectionLogType type, NSData * data);




typedef void (^MCOOperationQueueRunningChangeBlock)(void);
@class MCOIndexSet;

typedef struct {

    uint64_t location;


    uint64_t length;
} MCORange;


extern MCORange MCORangeEmpty;


MCORange MCORangeMake(uint64_t location, uint64_t length);


MCOIndexSet * MCORangeRemoveRange(MCORange range1, MCORange range2);


MCOIndexSet * MCORangeUnion(MCORange range1, MCORange range2);
MCORange MCORangeIntersection(MCORange range1, MCORange range2);


BOOL MCORangeHasIntersection(MCORange range1, MCORange range2);


uint64_t MCORangeLeftBound(MCORange range);


uint64_t MCORangeRightBound(MCORange range);


NSString * MCORangeToString(MCORange range);


MCORange MCORangeFromString(NSString * rangeString);



@interface MCOIndexSet : NSObject <NSCopying, NSCoding>


+ (MCOIndexSet *) indexSet;


+ (MCOIndexSet *) indexSetWithRange:(MCORange)range;


+ (MCOIndexSet *) indexSetWithIndex:(uint64_t)idx;


- (unsigned int) count;


- (void) addIndex:(uint64_t)idx;


- (void) removeIndex:(uint64_t)idx;


- (BOOL) containsIndex:(uint64_t)idx;


- (void) addRange:(MCORange)range;


- (void) removeRange:(MCORange)range;


- (void) intersectsRange:(MCORange)range;


- (void) addIndexSet:(MCOIndexSet *)indexSet;


- (void) removeIndexSet:(MCOIndexSet *)indexSet;


- (void) intersectsIndexSet:(MCOIndexSet *)indexSet;


- (MCORange *) allRanges;


- (unsigned int) rangesCount;


- (void) enumerateIndexes:(void (^)(uint64_t idx))block;


- (NSIndexSet *) nsIndexSet;

@end

@class MCOIndexSet;

@interface NSIndexSet (MCO)


- (MCOIndexSet *) mcoIndexSet;

@end
@class MCOMessageHeader;
@class MCOAbstractPart;







@interface MCOAbstractMessage : NSObject <NSCopying>






@property (nonatomic, strong) MCOMessageHeader * header;


- (MCOAbstractPart *) partForContentID:(NSString *)contentID;


- (MCOAbstractPart *) partForUniqueID:(NSString *)uniqueID;





- (NSArray * ) attachments;





- (NSArray * ) htmlInlineAttachments;





- (NSArray *) requiredPartsForRendering;

@end
@class MCOAbstractMessage;

typedef NS_ENUM(NSInteger, MCOPartType) {


    MCOPartTypeSingle,




    MCOPartTypeMessage,



    MCOPartTypeMultipartMixed,



    MCOPartTypeMultipartRelated,



    MCOPartTypeMultipartAlternative,



    MCOPartTypeMultipartSigned,
};







@interface MCOAbstractPart : NSObject <NSCopying>







@property (nonatomic, assign) MCOPartType partType;


@property (nonatomic, copy) NSString * filename;


@property (nonatomic, copy) NSString * mimeType;


@property (nonatomic, copy) NSString * charset;




@property (nonatomic, copy) NSString * uniqueID;


@property (nonatomic, copy) NSString * contentID;


@property (nonatomic, copy) NSString * contentLocation;


@property (nonatomic, copy) NSString * contentDescription;


@property (nonatomic, assign, getter=isInlineAttachment) BOOL inlineAttachment;


@property (nonatomic, assign, getter=isAttachment) BOOL attachment;


- (MCOAbstractPart *) partForContentID:(NSString *)contentID;


- (MCOAbstractPart *) partForUniqueID:(NSString *)uniqueID;


- (NSString *) decodedStringForData:(NSData *)data;


- (void) setContentTypeParameterValue:(NSString *)value forName:(NSString *)name;


- (void) removeContentTypeParameterForName:(NSString *)name;


- (NSString *) contentTypeParameterValueForName:(NSString *)name;


- (NSArray * ) allContentTypeParametersNames;

@end

@interface MCOAbstractPart (MCOUnavailable)


- (id) init NS_UNAVAILABLE;

@end

@class MCOMessageHeader;

@interface MCOAbstractMessagePart : MCOAbstractPart


@property (nonatomic, strong) MCOMessageHeader * header;



@property (nonatomic, strong) MCOAbstractPart * mainPart;

@end
@interface MCOAbstractMultipart : MCOAbstractPart


@property (nonatomic, copy) NSArray * parts;

@end

@interface MCOAddress : NSObject <NSCopying, NSCoding>




+ (MCOAddress *) addressWithDisplayName:(NSString *)displayName
                                mailbox:(NSString *)mailbox;




+ (MCOAddress *) addressWithMailbox:(NSString *)mailbox;




+ (MCOAddress *) addressWithRFC822String:(NSString *)RFC822String;




+ (MCOAddress *) addressWithNonEncodedRFC822String:(NSString *)nonEncodedRFC822String;






+ (NSArray *) addressesWithRFC822String:(NSString *)string;






+ (NSArray *) addressesWithNonEncodedRFC822String:(NSString *)string;



@property (nonatomic, copy) NSString * displayName;


@property (nonatomic, copy) NSString * mailbox;




- (NSString *) RFC822String;




- (NSString *) nonEncodedRFC822String;

@end

@interface NSArray (MCOAddress)


- (NSString *) mco_RFC822StringForAddresses;


- (NSString *) mco_nonEncodedRFC822StringForAddresses;

@end

@class MCOAddress;

@interface MCOMessageHeader : NSObject <NSCopying, NSCoding>


@property (nonatomic, copy) NSString * messageID;


@property (nonatomic, readonly, getter=isMessageIDAutoGenerated) BOOL messageIDAutoGenerated;


@property (nonatomic, copy) NSArray * references;


@property (nonatomic, copy) NSArray * inReplyTo;


@property (nonatomic, strong) NSDate * date;


@property (nonatomic, strong) NSDate * receivedDate;


@property (nonatomic, copy) MCOAddress * sender;


@property (nonatomic, copy) MCOAddress * from;


@property (nonatomic, copy) NSArray * to;


@property (nonatomic, copy) NSArray * cc;


@property (nonatomic, copy) NSArray * bcc;


@property (nonatomic, copy) NSArray * replyTo;


@property (nonatomic, copy) NSString * subject;


@property (nonatomic, copy) NSString * userAgent;


+ (MCOMessageHeader *) headerWithData:(NSData *)data;


- (id) initWithData:(NSData *)data;


- (void) setExtraHeaderValue:(NSString *)value forName:(NSString *)name;


- (void) removeExtraHeaderForName:(NSString *)name;


- (NSString *) extraHeaderValueForName:(NSString *)name;


- (NSArray * ) allExtraHeadersNames;


- (NSString *) extractedSubject;


- (NSString *) partialExtractedSubject;


- (void) importHeadersData:(NSData *)data;


- (MCOMessageHeader *) replyHeaderWithExcludedRecipients:(NSArray * )excludedRecipients;


- (MCOMessageHeader *) replyAllHeaderWithExcludedRecipients:(NSArray * )excludedRecipients;


- (MCOMessageHeader *) forwardHeader;

@end
@class MCOAbstractPart;
@class MCOAbstractMessage;
@class MCOMessageHeader;
@class MCOAbstractMessagePart;

@protocol MCOHTMLRendererDelegate <NSObject>


@optional






- (BOOL) MCOAbstractMessage:(MCOAbstractMessage *)msg canPreviewPart:(MCOAbstractPart *)part;


- (BOOL) MCOAbstractMessage:(MCOAbstractMessage *)msg shouldShowPart:(MCOAbstractPart *)part;



- (NSDictionary *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateValuesForHeader:(MCOMessageHeader *)header;



- (NSDictionary *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateValuesForPart:(MCOAbstractPart *)part;







- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateForMainHeader:(MCOMessageHeader *)header;


- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateForImage:(MCOAbstractPart *)header;



- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateForAttachment:(MCOAbstractPart *)part;




- (NSString *) MCOAbstractMessage_templateForMessage:(MCOAbstractMessage *)msg;




- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateForEmbeddedMessage:(MCOAbstractMessagePart *)part;



- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg templateForEmbeddedMessageHeader:(MCOMessageHeader *)header;


- (NSString *) MCOAbstractMessage_templateForAttachmentSeparator:(MCOAbstractMessage *)msg;




- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg cleanHTMLForPart:(NSString *)html;
- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg filterHTMLForPart:(NSString *)html;



- (NSString *) MCOAbstractMessage:(MCOAbstractMessage *)msg filterHTMLForMessage:(NSString *)html;

@end
@class MCOIMAPPart;

@protocol MCOHTMLRendererIMAPDelegate <MCOHTMLRendererDelegate>


@optional






- (NSData *) MCOAbstractMessage:(MCOAbstractMessage *)msg dataForIMAPPart:(MCOIMAPPart *)part folder:(NSString *)folder;





- (void) MCOAbstractMessage:(MCOAbstractMessage *)msg prefetchAttachmentIMAPPart:(MCOIMAPPart *)part folder:(NSString *)folder;





- (void) MCOAbstractMessage:(MCOAbstractMessage *)msg prefetchImageIMAPPart:(MCOIMAPPart *)part folder:(NSString *)folder;

@end
@class MCOIMAPFetchFoldersOperation;
@class MCOIMAPOperation;
@class MCOIMAPNamespace;
@class MCOIMAPFolderInfoOperation;
@class MCOIMAPFolderStatusOperation;
@class MCOIMAPAppendMessageOperation;
@class MCOIMAPCopyMessagesOperation;
@class MCOIndexSet;
@class MCOIMAPFetchMessagesOperation;
@class MCOIMAPFetchContentOperation;
@class MCOIMAPFetchParsedContentOperation;
@class MCOIMAPSearchOperation;
@class MCOIMAPIdleOperation;
@class MCOIMAPFetchNamespaceOperation;
@class MCOIMAPSearchExpression;
@class MCOIMAPIdentityOperation;
@class MCOIMAPCapabilityOperation;
@class MCOIMAPQuotaOperation;
@class MCOIMAPMessageRenderingOperation;
@class MCOIMAPMessage;
@class MCOIMAPIdentity;
@class MCOIMAPCustomCommandOperation;
@interface MCOIMAPSession : NSObject


@property (nonatomic, copy) NSString *hostname;


@property (nonatomic, assign) unsigned int port;


@property (nonatomic, copy) NSString *username;


@property (nonatomic, copy) NSString *password;


@property (nonatomic, copy) NSString *OAuth2Token;






@property (nonatomic, assign) MCOAuthType authType;





@property (nonatomic, assign) MCOConnectionType connectionType;


@property (nonatomic, assign) NSTimeInterval timeout;


@property (nonatomic, assign, getter=isCheckCertificateEnabled) BOOL checkCertificateEnabled;


@property (nonatomic, assign, getter=isVoIPEnabled) BOOL voIPEnabled;


@property (nonatomic, strong) MCOIMAPNamespace * defaultNamespace;


@property (nonatomic, strong, readonly) MCOIMAPIdentity * clientIdentity;


@property (nonatomic, strong, readonly) MCOIMAPIdentity * serverIdentity;
@property (nonatomic, copy, readonly) NSString * gmailUserDisplayName __attribute__((deprecated));





@property (nonatomic, assign) BOOL allowsFolderConcurrentAccessEnabled;




@property (nonatomic, assign) unsigned int maximumConnections;
@property (nonatomic, copy) MCOConnectionLogger connectionLogger;
@property (nonatomic, assign) dispatch_queue_t dispatchQueue;





@property (nonatomic, assign, readonly, getter=isOperationQueueRunning) BOOL operationQueueRunning;
@property (nonatomic, copy) MCOOperationQueueRunningChangeBlock operationQueueRunningChangeBlock;




- (void) cancelAllOperations;
- (MCOIMAPFolderInfoOperation *) folderInfoOperation:(NSString *)folder;
- (MCOIMAPFolderStatusOperation *) folderStatusOperation:(NSString *)folder;
- (MCOIMAPFetchFoldersOperation *) fetchSubscribedFoldersOperation;
- (MCOIMAPFetchFoldersOperation *) fetchAllFoldersOperation;
- (MCOIMAPOperation *) renameFolderOperation:(NSString *)folder otherName:(NSString *)otherName;
- (MCOIMAPOperation *) deleteFolderOperation:(NSString *)folder;
- (MCOIMAPOperation *) createFolderOperation:(NSString *)folder;
- (MCOIMAPOperation *) subscribeFolderOperation:(NSString *)folder;
- (MCOIMAPOperation *) unsubscribeFolderOperation:(NSString *)folder;
- (MCOIMAPOperation *) expungeOperation:(NSString *)folder;
- (MCOIMAPAppendMessageOperation *)appendMessageOperationWithFolder:(NSString *)folder
                                                        messageData:(NSData *)messageData
                                                              flags:(MCOMessageFlag)flags;
- (MCOIMAPAppendMessageOperation *)appendMessageOperationWithFolder:(NSString *)folder
                                                        messageData:(NSData *)messageData
                                                              flags:(MCOMessageFlag)flags
                                                        customFlags:(NSArray *)customFlags;
- (MCOIMAPCopyMessagesOperation *)copyMessagesOperationWithFolder:(NSString *)folder
                                                             uids:(MCOIndexSet *)uids
                                                       destFolder:(NSString *)destFolder NS_RETURNS_NOT_RETAINED;
- (MCOIMAPOperation *) storeFlagsOperationWithFolder:(NSString *)folder
                                                uids:(MCOIndexSet *)uids
                                                kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               flags:(MCOMessageFlag)flags;
- (MCOIMAPOperation *) storeFlagsOperationWithFolder:(NSString *)folder
                                             numbers:(MCOIndexSet *)numbers
                                                kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               flags:(MCOMessageFlag)flags;
- (MCOIMAPOperation *) storeFlagsOperationWithFolder:(NSString *)folder
                                                uids:(MCOIndexSet *)uids
                                                kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               flags:(MCOMessageFlag)flags
                                         customFlags:(NSArray *)customFlags;
- (MCOIMAPOperation *) storeFlagsOperationWithFolder:(NSString *)folder
                                             numbers:(MCOIndexSet *)numbers
                                                kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               flags:(MCOMessageFlag)flags
                                         customFlags:(NSArray *)customFlags;
- (MCOIMAPOperation *) storeLabelsOperationWithFolder:(NSString *)folder
                                              numbers:(MCOIndexSet *)numbers
                                                 kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               labels:(NSArray *)labels;
- (MCOIMAPOperation *) storeLabelsOperationWithFolder:(NSString *)folder
                                                 uids:(MCOIndexSet *)uids
                                                 kind:(MCOIMAPStoreFlagsRequestKind)kind
                                               labels:(NSArray *)labels;
- (MCOIMAPFetchMessagesOperation *) fetchMessagesByUIDOperationWithFolder:(NSString *)folder
                                                              requestKind:(MCOIMAPMessagesRequestKind)requestKind
                                                                     uids:(MCOIndexSet *)uids __attribute__((deprecated));
- (MCOIMAPFetchMessagesOperation *) fetchMessagesOperationWithFolder:(NSString *)folder
                                                         requestKind:(MCOIMAPMessagesRequestKind)requestKind
                                                                uids:(MCOIndexSet *)uids;
- (MCOIMAPFetchMessagesOperation *) fetchMessagesByNumberOperationWithFolder:(NSString *)folder
                                                                 requestKind:(MCOIMAPMessagesRequestKind)requestKind
                                                                     numbers:(MCOIndexSet *)numbers;
- (MCOIMAPFetchMessagesOperation *) syncMessagesByUIDWithFolder:(NSString *)folder
                                                    requestKind:(MCOIMAPMessagesRequestKind)requestKind
                                                           uids:(MCOIndexSet *)uids
                                                         modSeq:(uint64_t)modSeq __attribute__((deprecated));
- (MCOIMAPFetchMessagesOperation *) syncMessagesWithFolder:(NSString *)folder
                                              requestKind:(MCOIMAPMessagesRequestKind)requestKind
                                                     uids:(MCOIndexSet *)uids
                                                   modSeq:(uint64_t)modSeq;
- (MCOIMAPFetchContentOperation *) fetchMessageByUIDOperationWithFolder:(NSString *)folder
                                                                    uid:(uint32_t)uid
                                                                 urgent:(BOOL)urgent __attribute__((deprecated));
- (MCOIMAPFetchContentOperation *) fetchMessageByUIDOperationWithFolder:(NSString *)folder
                                                                    uid:(uint32_t)uid __attribute__((deprecated));
- (MCOIMAPFetchContentOperation *) fetchMessageOperationWithFolder:(NSString *)folder
                                                               uid:(uint32_t)uid
                                                            urgent:(BOOL)urgent;
- (MCOIMAPFetchContentOperation *) fetchMessageOperationWithFolder:(NSString *)folder
                                                               uid:(uint32_t)uid;
- (MCOIMAPFetchContentOperation *) fetchMessageOperationWithFolder:(NSString *)folder
                                                            number:(uint32_t)number
                                                            urgent:(BOOL)urgent;
- (MCOIMAPFetchContentOperation *) fetchMessageOperationWithFolder:(NSString *)folder
                                                             number:(uint32_t)number;
- (MCOIMAPFetchParsedContentOperation *) fetchParsedMessageOperationWithFolder:(NSString *)folder
                                                                           uid:(uint32_t)uid
                                                                        urgent:(BOOL)urgent;
- (MCOIMAPFetchParsedContentOperation *) fetchParsedMessageOperationWithFolder:(NSString *)folder
                                                                           uid:(uint32_t)uid;
- (MCOIMAPFetchParsedContentOperation *) fetchParsedMessageOperationWithFolder:(NSString *)folder
                                                                        number:(uint32_t)number
                                                                        urgent:(BOOL)urgent;
- (MCOIMAPFetchParsedContentOperation *) fetchParsedMessageOperationWithFolder:(NSString *)folder
                                                                        number:(uint32_t)number;
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentByUIDOperationWithFolder:(NSString *)folder
                                                                              uid:(uint32_t)uid
                                                                           partID:(NSString *)partID
                                                                         encoding:(MCOEncoding)encoding
                                                                           urgent:(BOOL)urgent __attribute__((deprecated));
- (MCOIMAPCustomCommandOperation *) customCommandOperation:(NSString *)command;
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentByUIDOperationWithFolder:(NSString *)folder
                                                                              uid:(uint32_t)uid
                                                                           partID:(NSString *)partID
                                                                         encoding:(MCOEncoding)encoding __attribute__((deprecated));
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentOperationWithFolder:(NSString *)folder
                                                                         uid:(uint32_t)uid
                                                                      partID:(NSString *)partID
                                                                    encoding:(MCOEncoding)encoding
                                                                      urgent:(BOOL)urgent;
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentOperationWithFolder:(NSString *)folder
                                                                         uid:(uint32_t)uid
                                                                      partID:(NSString *)partID
                                                                    encoding:(MCOEncoding)encoding;
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentOperationWithFolder:(NSString *)folder
                                                                      number:(uint32_t)number
                                                                      partID:(NSString *)partID
                                                                    encoding:(MCOEncoding)encoding
                                                                      urgent:(BOOL)urgent;
- (MCOIMAPFetchContentOperation *) fetchMessageAttachmentOperationWithFolder:(NSString *)folder
                                                                      number:(uint32_t)number
                                                                      partID:(NSString *)partID
                                                                    encoding:(MCOEncoding)encoding;
- (MCOIMAPIdleOperation *) idleOperationWithFolder:(NSString *)folder
                                      lastKnownUID:(uint32_t)lastKnownUID;
- (MCOIMAPFetchNamespaceOperation *) fetchNamespaceOperation;
- (MCOIMAPIdentityOperation *) identityOperationWithClientIdentity:(MCOIMAPIdentity *)identity;
- (MCOIMAPOperation *)connectOperation;
- (MCOIMAPOperation *) noopOperation;
- (MCOIMAPOperation *) checkAccountOperation;
- (MCOIMAPCapabilityOperation *) capabilityOperation;

- (MCOIMAPQuotaOperation *) quotaOperation;
- (MCOIMAPSearchOperation *) searchOperationWithFolder:(NSString *)folder
                                                  kind:(MCOIMAPSearchKind)kind
                                          searchString:(NSString *)searchString;
- (MCOIMAPSearchOperation *) searchExpressionOperationWithFolder:(NSString *)folder
                                                      expression:(MCOIMAPSearchExpression *)expression;
- (MCOIMAPMessageRenderingOperation *) htmlRenderingOperationWithMessage:(MCOIMAPMessage *)message
                                                                  folder:(NSString *)folder;
- (MCOIMAPMessageRenderingOperation *) htmlBodyRenderingOperationWithMessage:(MCOIMAPMessage *)message
                                                                      folder:(NSString *)folder;
- (MCOIMAPMessageRenderingOperation *) plainTextRenderingOperationWithMessage:(MCOIMAPMessage *)message
                                                                       folder:(NSString *)folder;
- (MCOIMAPMessageRenderingOperation *) plainTextBodyRenderingOperationWithMessage:(MCOIMAPMessage *)message
                                                                           folder:(NSString *)folder
                                                                  stripWhitespace:(BOOL)stripWhitespace;
- (MCOIMAPMessageRenderingOperation *) plainTextBodyRenderingOperationWithMessage:(MCOIMAPMessage *)message
                                                                           folder:(NSString *)folder;
- (MCOIMAPOperation *) disconnectOperation;

@end
typedef void (^MCOIMAPBaseOperationProgressBlock)(unsigned int current, unsigned int maximum);
typedef void (^MCOIMAPBaseOperationItemProgressBlock)(unsigned int current);

@interface MCOIMAPBaseOperation : MCOOperation

@property (nonatomic, assign, getter=isUrgent) BOOL urgent;
- (void)bodyProgress:(unsigned int)current maximum:(unsigned int)maximum;






- (void)itemProgress:(unsigned int)current maximum:(unsigned int)maximum;

@end


NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFetchFoldersOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, NSArray * _Nullable folders))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOIMAPFolder : NSObject <NSCopying>


@property (nonatomic, copy) NSString * path;


@property (nonatomic, assign) char delimiter;





@property (nonatomic, assign) MCOIMAPFolderFlag flags;

@end
@protocol MCOHTMLRendererIMAPDelegate;

@interface MCOIMAPMessage : MCOAbstractMessage <NSCoding>


@property (nonatomic, assign) uint32_t uid;



@property (nonatomic, assign) uint32_t sequenceNumber;


@property (nonatomic, assign) uint32_t size;


@property (nonatomic, assign) MCOMessageFlag flags;


@property (nonatomic, assign) MCOMessageFlag originalFlags;


@property (nonatomic, copy) NSArray * customFlags;


@property (nonatomic, assign) uint64_t modSeqValue;


@property (nonatomic, retain) MCOAbstractPart * mainPart;


@property (nonatomic, copy) NSArray * gmailLabels;


@property (nonatomic, assign) uint64_t gmailMessageID;


@property (nonatomic, assign) uint64_t gmailThreadID;





- (MCOAbstractPart *) partForPartID:(NSString *)partID;







- (NSString *) htmlRenderingWithFolder:(NSString *)folder
                              delegate:(id <MCOHTMLRendererIMAPDelegate>)delegate;

@end
@interface MCOIMAPMessagePart : MCOAbstractMessagePart <NSCoding>


@property (nonatomic, copy) NSString * partID;

@end
@interface MCOIMAPMultipart : MCOAbstractMultipart <NSCoding>


@property (nonatomic, copy) NSString * partID;

@end
@class MCOIMAPNamespace;

@interface MCOIMAPNamespace : NSObject <NSCopying>




+ (MCOIMAPNamespace *) namespaceWithPrefix:(NSString *)prefix delimiter:(char)delimiter;


- (NSString *) mainPrefix;


- (char) mainDelimiter;


- (NSArray * ) prefixes;





- (NSString *) pathForComponents:(NSArray *)components;





- (NSString *) pathForComponents:(NSArray *)components prefix:(NSString *)prefix;


- (NSArray * ) componentsFromPath:(NSString *)path;


- (BOOL) containsFolderPath:(NSString *)path;

@end
@interface MCOIMAPNamespaceItem : NSObject <NSCopying>


@property (nonatomic, copy) NSString * prefix;


@property (nonatomic, assign) char delimiter;


- (NSString *) pathForComponents:(NSArray *)components;


- (NSArray * ) componentsForPath:(NSString *)path;


- (BOOL) containsFolder:(NSString *)folder;

@end
@interface MCOIMAPIdentity : NSObject <NSCopying>


+ (MCOIMAPIdentity *) identityWithVendor:(NSString *)vendor
                                    name:(NSString *)name
                                 version:(NSString *)version;


@property (nonatomic, copy) NSString * vendor;


@property (nonatomic, copy) NSString * name;


@property (nonatomic, copy) NSString * version;


- (NSArray *) allInfoKeys;


- (NSString *) infoForKey:(NSString *)key;


- (void) setInfo:(NSString *)value forKey:(NSString *)key;


- (void) removeAllInfos;

@end
@interface MCOIMAPPart : MCOAbstractPart <NSCoding>


@property (nonatomic, copy) NSString * partID;


@property (nonatomic, nonatomic) unsigned int size;


@property (nonatomic, nonatomic) MCOEncoding encoding;





- (unsigned int) decodedSize;

@end
@class MCOIMAPFolderInfo;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFolderInfoOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOIMAPFolderInfo * _Nullable info))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOIMAPFolderInfo : NSObject <NSCopying>


@property (nonatomic, assign) uint32_t uidNext;


@property (nonatomic, assign) uint32_t uidValidity;


@property (nonatomic, assign) uint64_t modSequenceValue;


@property (nonatomic, assign) int messageCount;


@property (nonatomic, assign) uint32_t firstUnseenUid;


@property (nonatomic, assign) BOOL allowsNewPermanentFlags;

@end
@class MCOIMAPFolderStatus;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFolderStatusOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOIMAPFolderStatus * _Nullable status))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOIMAPFolderStatus : NSObject <NSCopying>


@property (nonatomic, assign) uint32_t uidNext;


@property (nonatomic, assign) uint32_t uidValidity;


@property (nonatomic, assign) uint32_t recentCount;


@property (nonatomic, assign) uint32_t unseenCount;


@property (nonatomic, assign) uint32_t messageCount;


@property (nonatomic, assign) uint64_t highestModSeqValue;

@end
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPAppendMessageOperation : MCOIMAPBaseOperation

@property (nonatomic, assign) time_t date;




@property (nonatomic, copy) MCOIMAPBaseOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error, uint32_t createdUID))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPCopyMessagesOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, NSDictionary * _Nullable uidMapping))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFetchMessagesOperation : MCOIMAPBaseOperation


@property (nonatomic, copy) MCOIMAPBaseOperationItemProgressBlock progress;


@property (nonatomic, copy) NSArray * extraHeaders;
- (void) start:(void (^)(NSError * _Nullable error, NSArray * _Nullable messages, MCOIndexSet * _Nullable vanishedMessages))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFetchContentOperation : MCOIMAPBaseOperation




@property (nonatomic, copy) MCOIMAPBaseOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error, NSData * _Nullable data))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOMessageParser;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFetchParsedContentOperation : MCOIMAPBaseOperation




@property (nonatomic, copy) MCOIMAPBaseOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error, MCOMessageParser * _Nullable parser))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPSearchOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOIndexSet * _Nullable searchResult))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPIdleOperation : MCOIMAPBaseOperation


- (void) interruptIdle;
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPFetchNamespaceOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, NSDictionary * _Nullable namespaces))completionBlock;

@end
NS_ASSUME_NONNULL_END



NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPIdentityOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, NSDictionary * _Nullable serverIdentity))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPCapabilityOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOIndexSet * _Nullable capabilities))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPQuotaOperation : MCOIMAPBaseOperation

- (void) start:(void (^)(NSError * _Nullable error, NSUInteger usage, NSUInteger limit))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOIMAPSearchExpression : NSObject
+ (MCOIMAPSearchExpression *) searchAll;
+ (MCOIMAPSearchExpression *) searchFrom:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchRecipient:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchTo:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchCc:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchBcc:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchSubject:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchContent:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchBody:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchUIDs:(MCOIndexSet *) uids;
+ (MCOIMAPSearchExpression *) searchNumbers:(MCOIndexSet *) numbers;
+ (MCOIMAPSearchExpression *) searchHeader:(NSString *)header value:(NSString *)value;
+ (MCOIMAPSearchExpression *) searchRead;
+ (MCOIMAPSearchExpression *) searchUnread;
+ (MCOIMAPSearchExpression *) searchFlagged;
+ (MCOIMAPSearchExpression *) searchUnflagged;
+ (MCOIMAPSearchExpression *) searchAnswered;
+ (MCOIMAPSearchExpression *) searchUnanswered;
+ (MCOIMAPSearchExpression *) searchDraft;
+ (MCOIMAPSearchExpression *) searchUndraft;
+ (MCOIMAPSearchExpression *) searchDeleted;
+ (MCOIMAPSearchExpression *) searchSpam;
+ (MCOIMAPSearchExpression *) searchBeforeDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchOnDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchSinceDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchBeforeReceivedDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchOnReceivedDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchSinceReceivedDate:(NSDate *)date;
+ (MCOIMAPSearchExpression *) searchSizeLargerThan:(uint32_t)size;
+ (MCOIMAPSearchExpression *) searchSizeSmallerThan:(uint32_t)size;
+ (MCOIMAPSearchExpression *) searchGmailThreadID:(uint64_t)number;
+ (MCOIMAPSearchExpression *) searchGmailMessageID:(uint64_t)number;
+ (MCOIMAPSearchExpression *) searchGmailRaw:(NSString *)expr;
+ (MCOIMAPSearchExpression *) searchAnd:(MCOIMAPSearchExpression *)expression other:(MCOIMAPSearchExpression *)other;
+ (MCOIMAPSearchExpression *) searchOr:(MCOIMAPSearchExpression *)expression other:(MCOIMAPSearchExpression *)other;
+ (MCOIMAPSearchExpression *) searchNot:(MCOIMAPSearchExpression *)expression;

@end
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPMessageRenderingOperation : MCOIMAPBaseOperation
- (void) start:(void (^)(NSString * _Nullable htmlString, NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOIMAPCustomCommandOperation : MCOIMAPBaseOperation

- (void)start:(void(^)(NSString * _Nullable response, NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOAttachment : MCOAbstractPart


+ (NSString *) mimeTypeForFilename:(NSString *)filename;


+ (MCOAttachment *) attachmentWithContentsOfFile:(NSString *)filename;


+ (MCOAttachment *) attachmentWithData:(NSData *)data filename:(NSString *)filename;


+ (MCOAttachment *) attachmentWithHTMLString:(NSString *)htmlString;


+ (MCOAttachment *) attachmentWithRFC822Message:(NSData *)messageData;


+ (MCOAttachment *) attachmentWithText:(NSString *)text;


@property (nonatomic, strong) NSData * data;


- (NSString *) decodedString;

@end
@class MCOAttachment;
@protocol MCOHTMLRendererDelegate;

@interface MCOMessageBuilder : MCOAbstractMessage <NSCopying>


@property (nonatomic, copy, setter=setHTMLBody:) NSString * htmlBody;


@property (nonatomic, copy) NSString * textBody;


@property (nonatomic, copy) NSArray * attachments;


@property (nonatomic, copy) NSArray * relatedAttachments;


@property (nonatomic, copy) NSString * boundaryPrefix;


- (void) addAttachment:(MCOAttachment *)attachment;


- (void) addRelatedAttachment:(MCOAttachment *)attachment;


- (NSData *) data;


- (NSData *) dataForEncryption;







- (NSData *) openPGPSignedMessageDataWithSignatureData:(NSData *)signature;






- (NSData *) openPGPEncryptedMessageDataWithEncryptedData:(NSData *)encryptedData;


- (NSString *) htmlRenderingWithDelegate:(id <MCOHTMLRendererDelegate>)delegate;


- (NSString *) htmlBodyRendering;


- (NSString *) plainTextRendering;



- (NSString *) plainTextBodyRendering;



- (NSString *) plainTextBodyRenderingAndStripWhitespace:(BOOL)stripWhitespace;

@end
@protocol MCOHTMLRendererDelegate;

@interface MCOMessageParser : MCOAbstractMessage


+ (MCOMessageParser *) messageParserWithData:(NSData *)data;


- (id) initWithData:(NSData *)data;
- (void) dealloc;


- (MCOAbstractPart *) mainPart;


- (NSData *) data;


- (NSString *) htmlRenderingWithDelegate:(id <MCOHTMLRendererDelegate>)delegate;


- (NSString *) htmlBodyRendering;


- (NSString *) plainTextRendering;



- (NSString *) plainTextBodyRendering;



- (NSString *) plainTextBodyRenderingAndStripWhitespace:(BOOL)stripWhitespace;

@end
@interface MCOMessagePart : MCOAbstractMessagePart <NSCopying>

@end
@interface MCOMultipart : MCOAbstractMultipart

@end
@class MCOPOPFetchMessagesOperation;
@class MCOPOPFetchHeaderOperation;
@class MCOPOPFetchMessageOperation;
@class MCOPOPOperation;
@class MCOIndexSet;



@interface MCOPOPSession : NSObject


@property (nonatomic, copy) NSString * hostname;


@property (nonatomic, assign) unsigned int port;


@property (nonatomic, copy) NSString * username;


@property (nonatomic, copy) NSString * password;






@property (nonatomic, assign) MCOAuthType authType;



@property (nonatomic, assign) MCOConnectionType connectionType;


@property (nonatomic, assign) NSTimeInterval timeout;


@property (nonatomic, assign, getter=isCheckCertificateEnabled) BOOL checkCertificateEnabled;
@property (nonatomic, copy) MCOConnectionLogger connectionLogger;
@property (nonatomic, assign) dispatch_queue_t dispatchQueue;





@property (nonatomic, assign, readonly, getter=isOperationQueueRunning) BOOL operationQueueRunning;
@property (nonatomic, copy) MCOOperationQueueRunningChangeBlock operationQueueRunningChangeBlock;




- (void) cancelAllOperations;
- (MCOPOPFetchMessagesOperation *) fetchMessagesOperation;
- (MCOPOPFetchHeaderOperation *) fetchHeaderOperationWithIndex:(unsigned int)index;
- (MCOPOPFetchMessageOperation *) fetchMessageOperationWithIndex:(unsigned int)index;
- (MCOPOPOperation *) deleteMessagesOperationWithIndexes:(MCOIndexSet *)indexes;
- (MCOPOPOperation *) disconnectOperation;
- (MCOPOPOperation *) checkAccountOperation;
- (MCOPOPOperation *) noopOperation;

@end
NS_ASSUME_NONNULL_BEGIN
@interface MCOPOPOperation : MCOOperation
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOMessageHeader;

NS_ASSUME_NONNULL_BEGIN
@interface MCOPOPFetchHeaderOperation : MCOPOPOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOMessageHeader * _Nullable header))completionBlock;

@end
NS_ASSUME_NONNULL_END
typedef void (^MCOPOPOperationProgressBlock)(unsigned int current, unsigned int maximum);

NS_ASSUME_NONNULL_BEGIN
@interface MCOPOPFetchMessageOperation : MCOPOPOperation


@property (nonatomic, copy) MCOPOPOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error, NSData * _Nullable messageData))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCOPOPFetchMessagesOperation : MCOPOPOperation
- (void) start:(void (^)(NSError * _Nullable error, NSArray * _Nullable messages))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCOPOPMessageInfo : NSObject <NSCopying>


@property (nonatomic, assign) unsigned int index;


@property (nonatomic, assign) unsigned int size;



@property (nonatomic, copy) NSString * uid;

@end
@class MCOSMTPSendOperation;
@class MCOSMTPOperation;
@class MCOAddress;

@interface MCOSMTPSession : NSObject


@property (nonatomic, copy) NSString * hostname;


@property (nonatomic, assign) unsigned int port;


@property (nonatomic, copy) NSString * username;


@property (nonatomic, copy) NSString * password;


@property (nonatomic, copy) NSString *OAuth2Token;






@property (nonatomic, assign) MCOAuthType authType;





@property (nonatomic, assign) MCOConnectionType connectionType;


@property (nonatomic, assign) NSTimeInterval timeout;


@property (nonatomic, assign, getter=isCheckCertificateEnabled) BOOL checkCertificateEnabled;





@property (nonatomic, assign, getter=isUseHeloIPEnabled) BOOL useHeloIPEnabled;
@property (nonatomic, copy) MCOConnectionLogger connectionLogger;
@property (nonatomic, assign) dispatch_queue_t dispatchQueue;





@property (nonatomic, assign, readonly, getter=isOperationQueueRunning) BOOL operationQueueRunning;
@property (nonatomic, copy) MCOOperationQueueRunningChangeBlock operationQueueRunningChangeBlock;




- (void) cancelAllOperations;
- (MCOSMTPOperation *) loginOperation;
- (MCOSMTPSendOperation *) sendOperationWithData:(NSData *)messageData;
- (MCOSMTPSendOperation *) sendOperationWithData:(NSData *)messageData
                                            from:(MCOAddress *)from
                                      recipients:(NSArray *)recipients;
- (MCOSMTPOperation *) checkAccountOperationWithFrom:(MCOAddress *)from;
- (MCOSMTPOperation *) noopOperation;

@end
NS_ASSUME_NONNULL_BEGIN
@interface MCOSMTPOperation : MCOOperation
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END



typedef void (^MCOSMTPOperationProgressBlock)(unsigned int current, unsigned int maximum);

NS_ASSUME_NONNULL_BEGIN
@interface MCOSMTPSendOperation : MCOSMTPOperation


@property (nonatomic, copy) MCOSMTPOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCONNTPFetchAllArticlesOperation;
@class MCONNTPFetchHeaderOperation;
@class MCONNTPFetchArticleOperation;
@class MCONNTPListNewsgroupsOperation;
@class MCONNTPFetchOverviewOperation;
@class MCONNTPFetchServerTimeOperation;
@class MCONNTPOperation;
@class MCOIndexSet;



NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPSession : NSObject


@property (nonatomic, copy) NSString * hostname;


@property (nonatomic, assign) unsigned int port;


@property (nonatomic, copy) NSString * username;


@property (nonatomic, copy) NSString * password;



@property (nonatomic, assign) MCOConnectionType connectionType;


@property (nonatomic, assign) NSTimeInterval timeout;


@property (nonatomic, assign, getter=isCheckCertificateEnabled) BOOL checkCertificateEnabled;
@property (nonatomic, copy) MCOConnectionLogger connectionLogger;
@property (nonatomic, assign) dispatch_queue_t dispatchQueue;





@property (nonatomic, assign, readonly, getter=isOperationQueueRunning) BOOL operationQueueRunning;
@property (nonatomic, copy) MCOOperationQueueRunningChangeBlock operationQueueRunningChangeBlock;




- (void) cancelAllOperations;
- (MCONNTPFetchAllArticlesOperation *) fetchAllArticlesOperation:(NSString *)group;
- (MCONNTPFetchHeaderOperation *) fetchHeaderOperationWithIndex:(unsigned int)index inGroup:(NSString *)group;
- (MCONNTPFetchOverviewOperation *)fetchOverviewOperationWithIndexes:(MCOIndexSet *)indexes inGroup:(NSString *)group;
- (MCONNTPFetchArticleOperation *) fetchArticleOperationWithIndex:(unsigned int)index inGroup:(NSString *)group;
- (MCONNTPFetchArticleOperation *) fetchArticleOperationWithMessageID:(NSString *)messageID;
- (MCONNTPFetchArticleOperation *) fetchArticleOperationWithMessageID:(NSString *)messageID inGroup:(NSString * _Nullable)group __attribute__((deprecated));
- (MCONNTPFetchServerTimeOperation *) fetchServerDateOperation;
- (MCONNTPListNewsgroupsOperation *) listAllNewsgroupsOperation;
- (MCONNTPListNewsgroupsOperation *) listDefaultNewsgroupsOperation;
- (MCONNTPOperation *) disconnectOperation;
- (MCONNTPOperation *) checkAccountOperation;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPOperation : MCOOperation
- (void) start:(void (^)(NSError * _Nullable error))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOMessageHeader;

NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPFetchHeaderOperation : MCONNTPOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOMessageHeader * _Nullable header))completionBlock;

@end
NS_ASSUME_NONNULL_END
typedef void (^MCONNTPOperationProgressBlock)(unsigned int current, unsigned int maximum);

NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPFetchArticleOperation : MCONNTPOperation


@property (nonatomic, copy) MCONNTPOperationProgressBlock progress;
- (void) start:(void (^)(NSError * _Nullable error, NSData * _Nullable messageData))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN

@interface MCONNTPFetchAllArticlesOperation : MCONNTPOperation
- (void) start:(void (^)(NSError * _Nullable error, MCOIndexSet * _Nullable articles))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPListNewsgroupsOperation : MCONNTPOperation
- (void) start:(void (^)(NSError * _Nullable error, NSArray * _Nullable messages))completionBlock;

@end
NS_ASSUME_NONNULL_END
NS_ASSUME_NONNULL_BEGIN
@interface MCONNTPFetchOverviewOperation : MCONNTPOperation
- (void) start:(void (^)(NSError * _Nullable error, NSArray * _Nullable messages))completionBlock;

@end
NS_ASSUME_NONNULL_END
@class MCOIndexSet;

NS_ASSUME_NONNULL_BEGIN

@interface MCONNTPFetchServerTimeOperation : MCONNTPOperation
- (void) start:(void (^)(NSError * _Nullable error, NSDate * _Nullable date))completionBlock;

@end
NS_ASSUME_NONNULL_END
@interface MCONNTPGroupInfo : NSObject <NSCopying>


@property (nonatomic, copy) NSString *name;


@property (nonatomic, assign) unsigned int messageCount;

@end
@interface MCONetService : NSObject <NSCopying>





@property (nonatomic, copy) NSString * hostname;


@property (nonatomic, assign) unsigned int port;


@property (nonatomic, assign) MCOConnectionType connectionType;

+ (MCONetService *) serviceWithInfo:(NSDictionary *)info;

- (id) initWithInfo:(NSDictionary *)info;
- (NSDictionary *) info;





- (NSString *) hostnameWithEmail:(NSString *)email;

@end

@interface MCONetService (MCOUnavailable)


- (id) init NS_UNAVAILABLE;

@end
@interface MCOMailProvider : NSObject

@property (nonatomic, copy) NSString * identifier;

- (id) initWithInfo:(NSDictionary *)info;





- (NSArray * ) imapServices;





- (NSArray * ) smtpServices;





- (NSArray * ) popServices;

- (BOOL) matchEmail:(NSString *)email;
- (BOOL) matchMX:(NSString *)hostname;





- (NSString *) sentMailFolderPath;






- (NSString *) starredFolderPath;





- (NSString *) allMailFolderPath;





- (NSString *) trashFolderPath;





- (NSString *) draftsFolderPath;





- (NSString *) spamFolderPath;






- (NSString *) importantFolderPath;

@end

@interface MCOMailProvider (MCOUnavailable)


- (id) init NS_UNAVAILABLE;

@end
@class MCOMailProvider;

@interface MCOMailProvidersManager : NSObject


+ (MCOMailProvidersManager *) sharedManager;





- (MCOMailProvider *) providerForEmail:(NSString *)email;





- (MCOMailProvider *) providerForMX:(NSString *)hostname;






- (MCOMailProvider *) providerForIdentifier:(NSString *)identifier;





- (void) registerProvidersWithFilename:(NSString *)filename;

@end
@class MCONetService;

@interface MCOAccountValidator : MCOOperation

@property (nonatomic, copy) NSString * email;
@property (nonatomic, copy) NSString * username;
@property (nonatomic, copy) NSString * password;
@property (nonatomic, copy) NSString * OAuth2Token;

@property (nonatomic, retain) NSArray * imapServers;
@property (nonatomic, retain) NSArray * popServers;
@property (nonatomic, retain) NSArray * smtpServers;

@property (nonatomic, assign, getter=isImapEnabled) BOOL imapEnabled;
@property (nonatomic, assign, getter=isPopEnabled) BOOL popEnabled;
@property (nonatomic, assign, getter=isSmtpEnabled) BOOL smtpEnabled;


@property (nonatomic, retain, readonly) NSString * identifier;
@property (nonatomic, retain, readonly) MCONetService * imapServer;
@property (nonatomic, retain, readonly) MCONetService * popServer;
@property (nonatomic, retain, readonly) MCONetService * smtpServer;
@property (nonatomic, retain, readonly) NSError * imapError;
@property (nonatomic, retain, readonly) NSError * popError;
@property (nonatomic, retain, readonly) NSError * smtpError;






- (void) start:(void (^)(void))completionBlock;


@end

