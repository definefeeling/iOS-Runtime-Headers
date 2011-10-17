/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject  {
    NSString *mString;
    unsigned short *mCharacters;
    unsigned int mLength;
    unsigned int mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}


- (void)skipWhitespace;
- (id)parseObject;
- (id)parseArray;
- (id)parseDictionary;
- (unsigned short)nextCharacter;
- (void)appendCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toString:(id)arg2;
- (id)parseHexCharacter;
- (id)parseString;
- (BOOL)parseConstantString:(const char *)arg1;
- (id)parseNull;
- (id)parseTrue;
- (id)parseFalse;
- (id)parseNumber;
- (id)initWithString:(id)arg1;
- (void)dealloc;

@end