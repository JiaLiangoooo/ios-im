// Namespaced Header
#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(IMSDK, symbol)
#endif

// Classes
#ifndef AFActivityIndicatorViewNotificationObserver
#define AFActivityIndicatorViewNotificationObserver __NS_SYMBOL(AFActivityIndicatorViewNotificationObserver)
#endif

#ifndef AFAutoPurgingImageCache
#define AFAutoPurgingImageCache __NS_SYMBOL(AFAutoPurgingImageCache)
#endif

#ifndef AFCachedImage
#define AFCachedImage __NS_SYMBOL(AFCachedImage)
#endif

#ifndef AFCompoundResponseSerializer
#define AFCompoundResponseSerializer __NS_SYMBOL(AFCompoundResponseSerializer)
#endif

#ifndef AFHTTPBodyPart
#define AFHTTPBodyPart __NS_SYMBOL(AFHTTPBodyPart)
#endif

#ifndef AFHTTPRequestSerializer
#define AFHTTPRequestSerializer __NS_SYMBOL(AFHTTPRequestSerializer)
#endif

#ifndef AFHTTPResponseSerializer
#define AFHTTPResponseSerializer __NS_SYMBOL(AFHTTPResponseSerializer)
#endif

#ifndef AFHTTPSessionManager
#define AFHTTPSessionManager __NS_SYMBOL(AFHTTPSessionManager)
#endif

#ifndef AFImageDownloadReceipt
#define AFImageDownloadReceipt __NS_SYMBOL(AFImageDownloadReceipt)
#endif

#ifndef AFImageDownloader
#define AFImageDownloader __NS_SYMBOL(AFImageDownloader)
#endif

#ifndef AFImageDownloaderMergedTask
#define AFImageDownloaderMergedTask __NS_SYMBOL(AFImageDownloaderMergedTask)
#endif

#ifndef AFImageDownloaderResponseHandler
#define AFImageDownloaderResponseHandler __NS_SYMBOL(AFImageDownloaderResponseHandler)
#endif

#ifndef AFImageResponseSerializer
#define AFImageResponseSerializer __NS_SYMBOL(AFImageResponseSerializer)
#endif

#ifndef AFJSONRequestSerializer
#define AFJSONRequestSerializer __NS_SYMBOL(AFJSONRequestSerializer)
#endif

#ifndef AFJSONResponseSerializer
#define AFJSONResponseSerializer __NS_SYMBOL(AFJSONResponseSerializer)
#endif

#ifndef AFMultipartBodyStream
#define AFMultipartBodyStream __NS_SYMBOL(AFMultipartBodyStream)
#endif

#ifndef AFNetworkActivityIndicatorManager
#define AFNetworkActivityIndicatorManager __NS_SYMBOL(AFNetworkActivityIndicatorManager)
#endif

#ifndef AFNetworkReachabilityManager
#define AFNetworkReachabilityManager __NS_SYMBOL(AFNetworkReachabilityManager)
#endif

#ifndef AFPropertyListRequestSerializer
#define AFPropertyListRequestSerializer __NS_SYMBOL(AFPropertyListRequestSerializer)
#endif

#ifndef AFPropertyListResponseSerializer
#define AFPropertyListResponseSerializer __NS_SYMBOL(AFPropertyListResponseSerializer)
#endif

#ifndef AFQueryStringPair
#define AFQueryStringPair __NS_SYMBOL(AFQueryStringPair)
#endif

#ifndef AFRefreshControlNotificationObserver
#define AFRefreshControlNotificationObserver __NS_SYMBOL(AFRefreshControlNotificationObserver)
#endif

#ifndef AFSecurityPolicy
#define AFSecurityPolicy __NS_SYMBOL(AFSecurityPolicy)
#endif

#ifndef AFStreamingMultipartFormData
#define AFStreamingMultipartFormData __NS_SYMBOL(AFStreamingMultipartFormData)
#endif

#ifndef AFURLSessionManager
#define AFURLSessionManager __NS_SYMBOL(AFURLSessionManager)
#endif

#ifndef AFURLSessionManagerTaskDelegate
#define AFURLSessionManagerTaskDelegate __NS_SYMBOL(AFURLSessionManagerTaskDelegate)
#endif

#ifndef AFXMLParserResponseSerializer
#define AFXMLParserResponseSerializer __NS_SYMBOL(AFXMLParserResponseSerializer)
#endif

#ifndef GPBAny
#define GPBAny __NS_SYMBOL(GPBAny)
#endif

#ifndef GPBAnyRoot
#define GPBAnyRoot __NS_SYMBOL(GPBAnyRoot)
#endif

#ifndef GPBApi
#define GPBApi __NS_SYMBOL(GPBApi)
#endif

#ifndef GPBApiRoot
#define GPBApiRoot __NS_SYMBOL(GPBApiRoot)
#endif

#ifndef GPBAutocreatedArray
#define GPBAutocreatedArray __NS_SYMBOL(GPBAutocreatedArray)
#endif

#ifndef GPBAutocreatedDictionary
#define GPBAutocreatedDictionary __NS_SYMBOL(GPBAutocreatedDictionary)
#endif

#ifndef GPBBoolArray
#define GPBBoolArray __NS_SYMBOL(GPBBoolArray)
#endif

#ifndef GPBBoolBoolDictionary
#define GPBBoolBoolDictionary __NS_SYMBOL(GPBBoolBoolDictionary)
#endif

#ifndef GPBBoolDoubleDictionary
#define GPBBoolDoubleDictionary __NS_SYMBOL(GPBBoolDoubleDictionary)
#endif

#ifndef GPBBoolEnumDictionary
#define GPBBoolEnumDictionary __NS_SYMBOL(GPBBoolEnumDictionary)
#endif

#ifndef GPBBoolFloatDictionary
#define GPBBoolFloatDictionary __NS_SYMBOL(GPBBoolFloatDictionary)
#endif

#ifndef GPBBoolInt32Dictionary
#define GPBBoolInt32Dictionary __NS_SYMBOL(GPBBoolInt32Dictionary)
#endif

#ifndef GPBBoolInt64Dictionary
#define GPBBoolInt64Dictionary __NS_SYMBOL(GPBBoolInt64Dictionary)
#endif

#ifndef GPBBoolObjectDictionary
#define GPBBoolObjectDictionary __NS_SYMBOL(GPBBoolObjectDictionary)
#endif

#ifndef GPBBoolUInt32Dictionary
#define GPBBoolUInt32Dictionary __NS_SYMBOL(GPBBoolUInt32Dictionary)
#endif

#ifndef GPBBoolUInt64Dictionary
#define GPBBoolUInt64Dictionary __NS_SYMBOL(GPBBoolUInt64Dictionary)
#endif

#ifndef GPBBoolValue
#define GPBBoolValue __NS_SYMBOL(GPBBoolValue)
#endif

#ifndef GPBBytesValue
#define GPBBytesValue __NS_SYMBOL(GPBBytesValue)
#endif

#ifndef GPBCodedInputStream
#define GPBCodedInputStream __NS_SYMBOL(GPBCodedInputStream)
#endif

#ifndef GPBCodedOutputStream
#define GPBCodedOutputStream __NS_SYMBOL(GPBCodedOutputStream)
#endif

#ifndef GPBDescriptor
#define GPBDescriptor __NS_SYMBOL(GPBDescriptor)
#endif

#ifndef GPBDoubleArray
#define GPBDoubleArray __NS_SYMBOL(GPBDoubleArray)
#endif

#ifndef GPBDoubleValue
#define GPBDoubleValue __NS_SYMBOL(GPBDoubleValue)
#endif

#ifndef GPBDuration
#define GPBDuration __NS_SYMBOL(GPBDuration)
#endif

#ifndef GPBDurationRoot
#define GPBDurationRoot __NS_SYMBOL(GPBDurationRoot)
#endif

#ifndef GPBEmpty
#define GPBEmpty __NS_SYMBOL(GPBEmpty)
#endif

#ifndef GPBEmptyRoot
#define GPBEmptyRoot __NS_SYMBOL(GPBEmptyRoot)
#endif

#ifndef GPBEnum
#define GPBEnum __NS_SYMBOL(GPBEnum)
#endif

#ifndef GPBEnumArray
#define GPBEnumArray __NS_SYMBOL(GPBEnumArray)
#endif

#ifndef GPBEnumDescriptor
#define GPBEnumDescriptor __NS_SYMBOL(GPBEnumDescriptor)
#endif

#ifndef GPBEnumValue
#define GPBEnumValue __NS_SYMBOL(GPBEnumValue)
#endif

#ifndef GPBExtensionDescriptor
#define GPBExtensionDescriptor __NS_SYMBOL(GPBExtensionDescriptor)
#endif

#ifndef GPBExtensionRegistry
#define GPBExtensionRegistry __NS_SYMBOL(GPBExtensionRegistry)
#endif

#ifndef GPBField
#define GPBField __NS_SYMBOL(GPBField)
#endif

#ifndef GPBFieldDescriptor
#define GPBFieldDescriptor __NS_SYMBOL(GPBFieldDescriptor)
#endif

#ifndef GPBFieldMask
#define GPBFieldMask __NS_SYMBOL(GPBFieldMask)
#endif

#ifndef GPBFieldMaskRoot
#define GPBFieldMaskRoot __NS_SYMBOL(GPBFieldMaskRoot)
#endif

#ifndef GPBFileDescriptor
#define GPBFileDescriptor __NS_SYMBOL(GPBFileDescriptor)
#endif

#ifndef GPBFloatArray
#define GPBFloatArray __NS_SYMBOL(GPBFloatArray)
#endif

#ifndef GPBFloatValue
#define GPBFloatValue __NS_SYMBOL(GPBFloatValue)
#endif

#ifndef GPBInt32Array
#define GPBInt32Array __NS_SYMBOL(GPBInt32Array)
#endif

#ifndef GPBInt32BoolDictionary
#define GPBInt32BoolDictionary __NS_SYMBOL(GPBInt32BoolDictionary)
#endif

#ifndef GPBInt32DoubleDictionary
#define GPBInt32DoubleDictionary __NS_SYMBOL(GPBInt32DoubleDictionary)
#endif

#ifndef GPBInt32EnumDictionary
#define GPBInt32EnumDictionary __NS_SYMBOL(GPBInt32EnumDictionary)
#endif

#ifndef GPBInt32FloatDictionary
#define GPBInt32FloatDictionary __NS_SYMBOL(GPBInt32FloatDictionary)
#endif

#ifndef GPBInt32Int32Dictionary
#define GPBInt32Int32Dictionary __NS_SYMBOL(GPBInt32Int32Dictionary)
#endif

#ifndef GPBInt32Int64Dictionary
#define GPBInt32Int64Dictionary __NS_SYMBOL(GPBInt32Int64Dictionary)
#endif

#ifndef GPBInt32ObjectDictionary
#define GPBInt32ObjectDictionary __NS_SYMBOL(GPBInt32ObjectDictionary)
#endif

#ifndef GPBInt32UInt32Dictionary
#define GPBInt32UInt32Dictionary __NS_SYMBOL(GPBInt32UInt32Dictionary)
#endif

#ifndef GPBInt32UInt64Dictionary
#define GPBInt32UInt64Dictionary __NS_SYMBOL(GPBInt32UInt64Dictionary)
#endif

#ifndef GPBInt32Value
#define GPBInt32Value __NS_SYMBOL(GPBInt32Value)
#endif

#ifndef GPBInt64Array
#define GPBInt64Array __NS_SYMBOL(GPBInt64Array)
#endif

#ifndef GPBInt64BoolDictionary
#define GPBInt64BoolDictionary __NS_SYMBOL(GPBInt64BoolDictionary)
#endif

#ifndef GPBInt64DoubleDictionary
#define GPBInt64DoubleDictionary __NS_SYMBOL(GPBInt64DoubleDictionary)
#endif

#ifndef GPBInt64EnumDictionary
#define GPBInt64EnumDictionary __NS_SYMBOL(GPBInt64EnumDictionary)
#endif

#ifndef GPBInt64FloatDictionary
#define GPBInt64FloatDictionary __NS_SYMBOL(GPBInt64FloatDictionary)
#endif

#ifndef GPBInt64Int32Dictionary
#define GPBInt64Int32Dictionary __NS_SYMBOL(GPBInt64Int32Dictionary)
#endif

#ifndef GPBInt64Int64Dictionary
#define GPBInt64Int64Dictionary __NS_SYMBOL(GPBInt64Int64Dictionary)
#endif

#ifndef GPBInt64ObjectDictionary
#define GPBInt64ObjectDictionary __NS_SYMBOL(GPBInt64ObjectDictionary)
#endif

#ifndef GPBInt64UInt32Dictionary
#define GPBInt64UInt32Dictionary __NS_SYMBOL(GPBInt64UInt32Dictionary)
#endif

#ifndef GPBInt64UInt64Dictionary
#define GPBInt64UInt64Dictionary __NS_SYMBOL(GPBInt64UInt64Dictionary)
#endif

#ifndef GPBInt64Value
#define GPBInt64Value __NS_SYMBOL(GPBInt64Value)
#endif

#ifndef GPBListValue
#define GPBListValue __NS_SYMBOL(GPBListValue)
#endif

#ifndef GPBMessage
#define GPBMessage __NS_SYMBOL(GPBMessage)
#endif

#ifndef GPBMessageSignatureProtocol
#define GPBMessageSignatureProtocol __NS_SYMBOL(GPBMessageSignatureProtocol)
#endif

#ifndef GPBMethod
#define GPBMethod __NS_SYMBOL(GPBMethod)
#endif

#ifndef GPBMixin
#define GPBMixin __NS_SYMBOL(GPBMixin)
#endif

#ifndef GPBOneofDescriptor
#define GPBOneofDescriptor __NS_SYMBOL(GPBOneofDescriptor)
#endif

#ifndef GPBOption
#define GPBOption __NS_SYMBOL(GPBOption)
#endif

#ifndef GPBRootObject
#define GPBRootObject __NS_SYMBOL(GPBRootObject)
#endif

#ifndef GPBSourceContext
#define GPBSourceContext __NS_SYMBOL(GPBSourceContext)
#endif

#ifndef GPBSourceContextRoot
#define GPBSourceContextRoot __NS_SYMBOL(GPBSourceContextRoot)
#endif

#ifndef GPBStringBoolDictionary
#define GPBStringBoolDictionary __NS_SYMBOL(GPBStringBoolDictionary)
#endif

#ifndef GPBStringDoubleDictionary
#define GPBStringDoubleDictionary __NS_SYMBOL(GPBStringDoubleDictionary)
#endif

#ifndef GPBStringEnumDictionary
#define GPBStringEnumDictionary __NS_SYMBOL(GPBStringEnumDictionary)
#endif

#ifndef GPBStringFloatDictionary
#define GPBStringFloatDictionary __NS_SYMBOL(GPBStringFloatDictionary)
#endif

#ifndef GPBStringInt32Dictionary
#define GPBStringInt32Dictionary __NS_SYMBOL(GPBStringInt32Dictionary)
#endif

#ifndef GPBStringInt64Dictionary
#define GPBStringInt64Dictionary __NS_SYMBOL(GPBStringInt64Dictionary)
#endif

#ifndef GPBStringUInt32Dictionary
#define GPBStringUInt32Dictionary __NS_SYMBOL(GPBStringUInt32Dictionary)
#endif

#ifndef GPBStringUInt64Dictionary
#define GPBStringUInt64Dictionary __NS_SYMBOL(GPBStringUInt64Dictionary)
#endif

#ifndef GPBStringValue
#define GPBStringValue __NS_SYMBOL(GPBStringValue)
#endif

#ifndef GPBStruct
#define GPBStruct __NS_SYMBOL(GPBStruct)
#endif

#ifndef GPBStructRoot
#define GPBStructRoot __NS_SYMBOL(GPBStructRoot)
#endif

#ifndef GPBTimestamp
#define GPBTimestamp __NS_SYMBOL(GPBTimestamp)
#endif

#ifndef GPBTimestampRoot
#define GPBTimestampRoot __NS_SYMBOL(GPBTimestampRoot)
#endif

#ifndef GPBType
#define GPBType __NS_SYMBOL(GPBType)
#endif

#ifndef GPBTypeRoot
#define GPBTypeRoot __NS_SYMBOL(GPBTypeRoot)
#endif

#ifndef GPBUInt32Array
#define GPBUInt32Array __NS_SYMBOL(GPBUInt32Array)
#endif

#ifndef GPBUInt32BoolDictionary
#define GPBUInt32BoolDictionary __NS_SYMBOL(GPBUInt32BoolDictionary)
#endif

#ifndef GPBUInt32DoubleDictionary
#define GPBUInt32DoubleDictionary __NS_SYMBOL(GPBUInt32DoubleDictionary)
#endif

#ifndef GPBUInt32EnumDictionary
#define GPBUInt32EnumDictionary __NS_SYMBOL(GPBUInt32EnumDictionary)
#endif

#ifndef GPBUInt32FloatDictionary
#define GPBUInt32FloatDictionary __NS_SYMBOL(GPBUInt32FloatDictionary)
#endif

#ifndef GPBUInt32Int32Dictionary
#define GPBUInt32Int32Dictionary __NS_SYMBOL(GPBUInt32Int32Dictionary)
#endif

#ifndef GPBUInt32Int64Dictionary
#define GPBUInt32Int64Dictionary __NS_SYMBOL(GPBUInt32Int64Dictionary)
#endif

#ifndef GPBUInt32ObjectDictionary
#define GPBUInt32ObjectDictionary __NS_SYMBOL(GPBUInt32ObjectDictionary)
#endif

#ifndef GPBUInt32UInt32Dictionary
#define GPBUInt32UInt32Dictionary __NS_SYMBOL(GPBUInt32UInt32Dictionary)
#endif

#ifndef GPBUInt32UInt64Dictionary
#define GPBUInt32UInt64Dictionary __NS_SYMBOL(GPBUInt32UInt64Dictionary)
#endif

#ifndef GPBUInt32Value
#define GPBUInt32Value __NS_SYMBOL(GPBUInt32Value)
#endif

#ifndef GPBUInt64Array
#define GPBUInt64Array __NS_SYMBOL(GPBUInt64Array)
#endif

#ifndef GPBUInt64BoolDictionary
#define GPBUInt64BoolDictionary __NS_SYMBOL(GPBUInt64BoolDictionary)
#endif

#ifndef GPBUInt64DoubleDictionary
#define GPBUInt64DoubleDictionary __NS_SYMBOL(GPBUInt64DoubleDictionary)
#endif

#ifndef GPBUInt64EnumDictionary
#define GPBUInt64EnumDictionary __NS_SYMBOL(GPBUInt64EnumDictionary)
#endif

#ifndef GPBUInt64FloatDictionary
#define GPBUInt64FloatDictionary __NS_SYMBOL(GPBUInt64FloatDictionary)
#endif

#ifndef GPBUInt64Int32Dictionary
#define GPBUInt64Int32Dictionary __NS_SYMBOL(GPBUInt64Int32Dictionary)
#endif

#ifndef GPBUInt64Int64Dictionary
#define GPBUInt64Int64Dictionary __NS_SYMBOL(GPBUInt64Int64Dictionary)
#endif

#ifndef GPBUInt64ObjectDictionary
#define GPBUInt64ObjectDictionary __NS_SYMBOL(GPBUInt64ObjectDictionary)
#endif

#ifndef GPBUInt64UInt32Dictionary
#define GPBUInt64UInt32Dictionary __NS_SYMBOL(GPBUInt64UInt32Dictionary)
#endif

#ifndef GPBUInt64UInt64Dictionary
#define GPBUInt64UInt64Dictionary __NS_SYMBOL(GPBUInt64UInt64Dictionary)
#endif

#ifndef GPBUInt64Value
#define GPBUInt64Value __NS_SYMBOL(GPBUInt64Value)
#endif

#ifndef GPBUnknownField
#define GPBUnknownField __NS_SYMBOL(GPBUnknownField)
#endif

#ifndef GPBUnknownFieldSet
#define GPBUnknownFieldSet __NS_SYMBOL(GPBUnknownFieldSet)
#endif

#ifndef GPBValue
#define GPBValue __NS_SYMBOL(GPBValue)
#endif

#ifndef GPBWrappersRoot
#define GPBWrappersRoot __NS_SYMBOL(GPBWrappersRoot)
#endif

#ifndef IMSDK_IMSDKMessageTest
#define IMSDK_IMSDKMessageTest __NS_SYMBOL(IMSDK_IMSDKMessageTest)
#endif

#ifndef _AFURLSessionTaskSwizzling
#define _AFURLSessionTaskSwizzling __NS_SYMBOL(_AFURLSessionTaskSwizzling)
#endif

// Functions
#ifndef AFPercentEscapedStringFromString
#define AFPercentEscapedStringFromString __NS_SYMBOL(AFPercentEscapedStringFromString)
#endif

#ifndef AFStringFromNetworkReachabilityStatus
#define AFStringFromNetworkReachabilityStatus __NS_SYMBOL(AFStringFromNetworkReachabilityStatus)
#endif

#ifndef GPBCodedInputStreamReadDouble
#define GPBCodedInputStreamReadDouble __NS_SYMBOL(GPBCodedInputStreamReadDouble)
#endif

#ifndef GPBCreateMessageWithAutocreator
#define GPBCreateMessageWithAutocreator __NS_SYMBOL(GPBCreateMessageWithAutocreator)
#endif

#ifndef GPBDictionaryComputeSizeInternalHelper
#define GPBDictionaryComputeSizeInternalHelper __NS_SYMBOL(GPBDictionaryComputeSizeInternalHelper)
#endif

#ifndef GPBEmptyNSData
#define GPBEmptyNSData __NS_SYMBOL(GPBEmptyNSData)
#endif

#ifndef GPBExtensionMergeFromInputStream
#define GPBExtensionMergeFromInputStream __NS_SYMBOL(GPBExtensionMergeFromInputStream)
#endif

#ifndef GPBNullValue_EnumDescriptor
#define GPBNullValue_EnumDescriptor __NS_SYMBOL(GPBNullValue_EnumDescriptor)
#endif

#ifndef GPBSyntax_EnumDescriptor
#define GPBSyntax_EnumDescriptor __NS_SYMBOL(GPBSyntax_EnumDescriptor)
#endif

#ifndef GPBWireFormatMakeTag
#define GPBWireFormatMakeTag __NS_SYMBOL(GPBWireFormatMakeTag)
#endif

#ifndef GPBWireFormatGetTagWireType
#define GPBWireFormatGetTagWireType __NS_SYMBOL(GPBWireFormatGetTagWireType)
#endif

#ifndef GPBWireFormatGetTagFieldNumber
#define GPBWireFormatGetTagFieldNumber __NS_SYMBOL(GPBWireFormatGetTagFieldNumber)
#endif

#ifndef GPBWasMessageAutocreatedBy
#define GPBWasMessageAutocreatedBy __NS_SYMBOL(GPBWasMessageAutocreatedBy)
#endif

#ifndef GPBWireFormatIsValidTag
#define GPBWireFormatIsValidTag __NS_SYMBOL(GPBWireFormatIsValidTag)
#endif

#ifndef GPBCodedInputStreamReadFloat
#define GPBCodedInputStreamReadFloat __NS_SYMBOL(GPBCodedInputStreamReadFloat)
#endif

#ifndef GPBMessageDropUnknownFieldsRecursively
#define GPBMessageDropUnknownFieldsRecursively __NS_SYMBOL(GPBMessageDropUnknownFieldsRecursively)
#endif

#ifndef GPBBecomeVisibleToAutocreator
#define GPBBecomeVisibleToAutocreator __NS_SYMBOL(GPBBecomeVisibleToAutocreator)
#endif

#ifndef GPBWireFormatForType
#define GPBWireFormatForType __NS_SYMBOL(GPBWireFormatForType)
#endif

#ifndef GPBNullValue_IsValidValue
#define GPBNullValue_IsValidValue __NS_SYMBOL(GPBNullValue_IsValidValue)
#endif

#ifndef GPBSyntax_IsValidValue
#define GPBSyntax_IsValidValue __NS_SYMBOL(GPBSyntax_IsValidValue)
#endif

#ifndef GPBCodedInputStreamReadUInt64
#define GPBCodedInputStreamReadUInt64 __NS_SYMBOL(GPBCodedInputStreamReadUInt64)
#endif

#ifndef GPBAutocreatedArrayModified
#define GPBAutocreatedArrayModified __NS_SYMBOL(GPBAutocreatedArrayModified)
#endif

#ifndef GPBCodedInputStreamReadUInt32
#define GPBCodedInputStreamReadUInt32 __NS_SYMBOL(GPBCodedInputStreamReadUInt32)
#endif

#ifndef GPBApi_Syntax_RawValue
#define GPBApi_Syntax_RawValue __NS_SYMBOL(GPBApi_Syntax_RawValue)
#endif

#ifndef GPBCodedInputStreamReadInt64
#define GPBCodedInputStreamReadInt64 __NS_SYMBOL(GPBCodedInputStreamReadInt64)
#endif

#ifndef GPBCodedInputStreamReadInt32
#define GPBCodedInputStreamReadInt32 __NS_SYMBOL(GPBCodedInputStreamReadInt32)
#endif

#ifndef SetGPBApi_Syntax_RawValue
#define SetGPBApi_Syntax_RawValue __NS_SYMBOL(SetGPBApi_Syntax_RawValue)
#endif

#ifndef GPBResolveExtensionClassMethod
#define GPBResolveExtensionClassMethod __NS_SYMBOL(GPBResolveExtensionClassMethod)
#endif

#ifndef GPBCodedInputStreamReadFixed64
#define GPBCodedInputStreamReadFixed64 __NS_SYMBOL(GPBCodedInputStreamReadFixed64)
#endif

#ifndef GPBCodedInputStreamReadFixed32
#define GPBCodedInputStreamReadFixed32 __NS_SYMBOL(GPBCodedInputStreamReadFixed32)
#endif

#ifndef GPBDictionaryWriteToStreamInternalHelper
#define GPBDictionaryWriteToStreamInternalHelper __NS_SYMBOL(GPBDictionaryWriteToStreamInternalHelper)
#endif

#ifndef GPBCodedInputStreamReadEnum
#define GPBCodedInputStreamReadEnum __NS_SYMBOL(GPBCodedInputStreamReadEnum)
#endif

#ifndef GPBType_Syntax_RawValue
#define GPBType_Syntax_RawValue __NS_SYMBOL(GPBType_Syntax_RawValue)
#endif

#ifndef GPBCodedInputStreamReadSFixed32
#define GPBCodedInputStreamReadSFixed32 __NS_SYMBOL(GPBCodedInputStreamReadSFixed32)
#endif

#ifndef GPBCodedInputStreamReadSFixed64
#define GPBCodedInputStreamReadSFixed64 __NS_SYMBOL(GPBCodedInputStreamReadSFixed64)
#endif

#ifndef SetGPBType_Syntax_RawValue
#define SetGPBType_Syntax_RawValue __NS_SYMBOL(SetGPBType_Syntax_RawValue)
#endif

#ifndef GPBCodedInputStreamReadSInt32
#define GPBCodedInputStreamReadSInt32 __NS_SYMBOL(GPBCodedInputStreamReadSInt32)
#endif

#ifndef GPBCodedInputStreamReadSInt64
#define GPBCodedInputStreamReadSInt64 __NS_SYMBOL(GPBCodedInputStreamReadSInt64)
#endif

#ifndef GPBCodedInputStreamReadBool
#define GPBCodedInputStreamReadBool __NS_SYMBOL(GPBCodedInputStreamReadBool)
#endif

#ifndef GPBCodedInputStreamReadTag
#define GPBCodedInputStreamReadTag __NS_SYMBOL(GPBCodedInputStreamReadTag)
#endif

#ifndef GPBMethod_Syntax_RawValue
#define GPBMethod_Syntax_RawValue __NS_SYMBOL(GPBMethod_Syntax_RawValue)
#endif

#ifndef GPBValue_NullValue_RawValue
#define GPBValue_NullValue_RawValue __NS_SYMBOL(GPBValue_NullValue_RawValue)
#endif

#ifndef GPBCodedInputStreamIsAtEnd
#define GPBCodedInputStreamIsAtEnd __NS_SYMBOL(GPBCodedInputStreamIsAtEnd)
#endif

#ifndef SetGPBMethod_Syntax_RawValue
#define SetGPBMethod_Syntax_RawValue __NS_SYMBOL(SetGPBMethod_Syntax_RawValue)
#endif

#ifndef SetGPBValue_NullValue_RawValue
#define SetGPBValue_NullValue_RawValue __NS_SYMBOL(SetGPBValue_NullValue_RawValue)
#endif

#ifndef GPBField_Kind_EnumDescriptor
#define GPBField_Kind_EnumDescriptor __NS_SYMBOL(GPBField_Kind_EnumDescriptor)
#endif

#ifndef GPBValue_ClearKindOneOfCase
#define GPBValue_ClearKindOneOfCase __NS_SYMBOL(GPBValue_ClearKindOneOfCase)
#endif

#ifndef GPBAutocreatedDictionaryModified
#define GPBAutocreatedDictionaryModified __NS_SYMBOL(GPBAutocreatedDictionaryModified)
#endif

#ifndef GPBField_Cardinality_EnumDescriptor
#define GPBField_Cardinality_EnumDescriptor __NS_SYMBOL(GPBField_Cardinality_EnumDescriptor)
#endif

#ifndef GPBDictionaryIsInitializedInternalHelper
#define GPBDictionaryIsInitializedInternalHelper __NS_SYMBOL(GPBDictionaryIsInitializedInternalHelper)
#endif

#ifndef GPBCodedInputStreamReadRetainedString
#define GPBCodedInputStreamReadRetainedString __NS_SYMBOL(GPBCodedInputStreamReadRetainedString)
#endif

#ifndef GPBField_Kind_RawValue
#define GPBField_Kind_RawValue __NS_SYMBOL(GPBField_Kind_RawValue)
#endif

#ifndef SetGPBField_Kind_RawValue
#define SetGPBField_Kind_RawValue __NS_SYMBOL(SetGPBField_Kind_RawValue)
#endif

#ifndef AFQueryStringFromParameters
#define AFQueryStringFromParameters __NS_SYMBOL(AFQueryStringFromParameters)
#endif

#ifndef GPBField_Cardinality_RawValue
#define GPBField_Cardinality_RawValue __NS_SYMBOL(GPBField_Cardinality_RawValue)
#endif

#ifndef GPBCodedInputStreamReadRetainedBytes
#define GPBCodedInputStreamReadRetainedBytes __NS_SYMBOL(GPBCodedInputStreamReadRetainedBytes)
#endif

#ifndef SetGPBField_Cardinality_RawValue
#define SetGPBField_Cardinality_RawValue __NS_SYMBOL(SetGPBField_Cardinality_RawValue)
#endif

#ifndef GPBWriteExtensionValueToOutputStream
#define GPBWriteExtensionValueToOutputStream __NS_SYMBOL(GPBWriteExtensionValueToOutputStream)
#endif

#ifndef GPBCodedInputStreamReadRetainedBytesNoCopy
#define GPBCodedInputStreamReadRetainedBytesNoCopy __NS_SYMBOL(GPBCodedInputStreamReadRetainedBytesNoCopy)
#endif

#ifndef GPBField_Kind_IsValidValue
#define GPBField_Kind_IsValidValue __NS_SYMBOL(GPBField_Kind_IsValidValue)
#endif

#ifndef GPBField_Cardinality_IsValidValue
#define GPBField_Cardinality_IsValidValue __NS_SYMBOL(GPBField_Cardinality_IsValidValue)
#endif

#ifndef GPBDictionaryReadEntry
#define GPBDictionaryReadEntry __NS_SYMBOL(GPBDictionaryReadEntry)
#endif

#ifndef GPBCodedInputStreamPushLimit
#define GPBCodedInputStreamPushLimit __NS_SYMBOL(GPBCodedInputStreamPushLimit)
#endif

#ifndef GPBCodedInputStreamPopLimit
#define GPBCodedInputStreamPopLimit __NS_SYMBOL(GPBCodedInputStreamPopLimit)
#endif

#ifndef GPBCodedInputStreamBytesUntilLimit
#define GPBCodedInputStreamBytesUntilLimit __NS_SYMBOL(GPBCodedInputStreamBytesUntilLimit)
#endif

#ifndef GPBCodedInputStreamCheckLastTagWas
#define GPBCodedInputStreamCheckLastTagWas __NS_SYMBOL(GPBCodedInputStreamCheckLastTagWas)
#endif

#ifndef AFQueryStringPairsFromDictionary
#define AFQueryStringPairsFromDictionary __NS_SYMBOL(AFQueryStringPairsFromDictionary)
#endif

#ifndef GPBClearMessageAutocreator
#define GPBClearMessageAutocreator __NS_SYMBOL(GPBClearMessageAutocreator)
#endif

#ifndef AFQueryStringPairsFromKeyAndValue
#define AFQueryStringPairsFromKeyAndValue __NS_SYMBOL(AFQueryStringPairsFromKeyAndValue)
#endif

#ifndef GPBEnum_Syntax_RawValue
#define GPBEnum_Syntax_RawValue __NS_SYMBOL(GPBEnum_Syntax_RawValue)
#endif

#ifndef SetGPBEnum_Syntax_RawValue
#define SetGPBEnum_Syntax_RawValue __NS_SYMBOL(SetGPBEnum_Syntax_RawValue)
#endif

#ifndef GPBGetObjectIvarWithFieldNoAutocreate
#define GPBGetObjectIvarWithFieldNoAutocreate __NS_SYMBOL(GPBGetObjectIvarWithFieldNoAutocreate)
#endif

#ifndef GPBPrepareReadOnlySemaphore
#define GPBPrepareReadOnlySemaphore __NS_SYMBOL(GPBPrepareReadOnlySemaphore)
#endif

#ifndef GPBCheckRuntimeVersionSupport
#define GPBCheckRuntimeVersionSupport __NS_SYMBOL(GPBCheckRuntimeVersionSupport)
#endif

#ifndef GPBCheckRuntimeVersionInternal
#define GPBCheckRuntimeVersionInternal __NS_SYMBOL(GPBCheckRuntimeVersionInternal)
#endif

#ifndef GPBMessageHasFieldNumberSet
#define GPBMessageHasFieldNumberSet __NS_SYMBOL(GPBMessageHasFieldNumberSet)
#endif

#ifndef GPBMessageHasFieldSet
#define GPBMessageHasFieldSet __NS_SYMBOL(GPBMessageHasFieldSet)
#endif

#ifndef GPBClearMessageField
#define GPBClearMessageField __NS_SYMBOL(GPBClearMessageField)
#endif

#ifndef GPBGetHasIvar
#define GPBGetHasIvar __NS_SYMBOL(GPBGetHasIvar)
#endif

#ifndef GPBComputeExtensionSerializedSizeIncludingTag
#define GPBComputeExtensionSerializedSizeIncludingTag __NS_SYMBOL(GPBComputeExtensionSerializedSizeIncludingTag)
#endif

#ifndef GPBGetHasOneof
#define GPBGetHasOneof __NS_SYMBOL(GPBGetHasOneof)
#endif

#ifndef GPBSetHasIvar
#define GPBSetHasIvar __NS_SYMBOL(GPBSetHasIvar)
#endif

#ifndef GPBComputeDoubleSizeNoTag
#define GPBComputeDoubleSizeNoTag __NS_SYMBOL(GPBComputeDoubleSizeNoTag)
#endif

#ifndef GPBMaybeClearOneof
#define GPBMaybeClearOneof __NS_SYMBOL(GPBMaybeClearOneof)
#endif

#ifndef GPBComputeFloatSizeNoTag
#define GPBComputeFloatSizeNoTag __NS_SYMBOL(GPBComputeFloatSizeNoTag)
#endif

#ifndef GPBSetAutocreatedRetainedObjectIvarWithField
#define GPBSetAutocreatedRetainedObjectIvarWithField __NS_SYMBOL(GPBSetAutocreatedRetainedObjectIvarWithField)
#endif

#ifndef GPBClearAutocreatedMessageIvarWithField
#define GPBClearAutocreatedMessageIvarWithField __NS_SYMBOL(GPBClearAutocreatedMessageIvarWithField)
#endif

#ifndef GPBSetObjectIvarWithFieldInternal
#define GPBSetObjectIvarWithFieldInternal __NS_SYMBOL(GPBSetObjectIvarWithFieldInternal)
#endif

#ifndef GPBSetRetainedObjectIvarWithFieldInternal
#define GPBSetRetainedObjectIvarWithFieldInternal __NS_SYMBOL(GPBSetRetainedObjectIvarWithFieldInternal)
#endif

#ifndef GPBComputeUInt64SizeNoTag
#define GPBComputeUInt64SizeNoTag __NS_SYMBOL(GPBComputeUInt64SizeNoTag)
#endif

#ifndef GPBComputeInt64SizeNoTag
#define GPBComputeInt64SizeNoTag __NS_SYMBOL(GPBComputeInt64SizeNoTag)
#endif

#ifndef GPBGetObjectIvarWithField
#define GPBGetObjectIvarWithField __NS_SYMBOL(GPBGetObjectIvarWithField)
#endif

#ifndef GPBComputeInt32SizeNoTag
#define GPBComputeInt32SizeNoTag __NS_SYMBOL(GPBComputeInt32SizeNoTag)
#endif

#ifndef GPBFieldTag
#define GPBFieldTag __NS_SYMBOL(GPBFieldTag)
#endif

#ifndef GPBFieldAlternateTag
#define GPBFieldAlternateTag __NS_SYMBOL(GPBFieldAlternateTag)
#endif

#ifndef GPBGetMessageEnumField
#define GPBGetMessageEnumField __NS_SYMBOL(GPBGetMessageEnumField)
#endif

#ifndef GPBGetEnumIvarWithFieldInternal
#define GPBGetEnumIvarWithFieldInternal __NS_SYMBOL(GPBGetEnumIvarWithFieldInternal)
#endif

#ifndef GPBGetMessageInt32Field
#define GPBGetMessageInt32Field __NS_SYMBOL(GPBGetMessageInt32Field)
#endif

#ifndef GPBSetMessageEnumField
#define GPBSetMessageEnumField __NS_SYMBOL(GPBSetMessageEnumField)
#endif

#ifndef GPBSetInt32IvarWithFieldInternal
#define GPBSetInt32IvarWithFieldInternal __NS_SYMBOL(GPBSetInt32IvarWithFieldInternal)
#endif

#ifndef GPBComputeUInt32SizeNoTag
#define GPBComputeUInt32SizeNoTag __NS_SYMBOL(GPBComputeUInt32SizeNoTag)
#endif

#ifndef GPBSetEnumIvarWithFieldInternal
#define GPBSetEnumIvarWithFieldInternal __NS_SYMBOL(GPBSetEnumIvarWithFieldInternal)
#endif

#ifndef GPBGetMessageRawEnumField
#define GPBGetMessageRawEnumField __NS_SYMBOL(GPBGetMessageRawEnumField)
#endif

#ifndef GPBSetMessageRawEnumField
#define GPBSetMessageRawEnumField __NS_SYMBOL(GPBSetMessageRawEnumField)
#endif

#ifndef GPBGetMessageBoolField
#define GPBGetMessageBoolField __NS_SYMBOL(GPBGetMessageBoolField)
#endif

#ifndef GPBComputeFixed64SizeNoTag
#define GPBComputeFixed64SizeNoTag __NS_SYMBOL(GPBComputeFixed64SizeNoTag)
#endif

#ifndef GPBSetMessageBoolField
#define GPBSetMessageBoolField __NS_SYMBOL(GPBSetMessageBoolField)
#endif

#ifndef GPBSetBoolIvarWithFieldInternal
#define GPBSetBoolIvarWithFieldInternal __NS_SYMBOL(GPBSetBoolIvarWithFieldInternal)
#endif

#ifndef GPBSetMessageInt32Field
#define GPBSetMessageInt32Field __NS_SYMBOL(GPBSetMessageInt32Field)
#endif

#ifndef GPBGetMessageUInt32Field
#define GPBGetMessageUInt32Field __NS_SYMBOL(GPBGetMessageUInt32Field)
#endif

#ifndef GPBSetMessageUInt32Field
#define GPBSetMessageUInt32Field __NS_SYMBOL(GPBSetMessageUInt32Field)
#endif

#ifndef GPBSetUInt32IvarWithFieldInternal
#define GPBSetUInt32IvarWithFieldInternal __NS_SYMBOL(GPBSetUInt32IvarWithFieldInternal)
#endif

#ifndef GPBComputeFixed32SizeNoTag
#define GPBComputeFixed32SizeNoTag __NS_SYMBOL(GPBComputeFixed32SizeNoTag)
#endif

#ifndef GPBGetMessageInt64Field
#define GPBGetMessageInt64Field __NS_SYMBOL(GPBGetMessageInt64Field)
#endif

#ifndef GPBSetMessageInt64Field
#define GPBSetMessageInt64Field __NS_SYMBOL(GPBSetMessageInt64Field)
#endif

#ifndef GPBSetInt64IvarWithFieldInternal
#define GPBSetInt64IvarWithFieldInternal __NS_SYMBOL(GPBSetInt64IvarWithFieldInternal)
#endif

#ifndef GPBComputeSInt32SizeNoTag
#define GPBComputeSInt32SizeNoTag __NS_SYMBOL(GPBComputeSInt32SizeNoTag)
#endif

#ifndef GPBGetMessageUInt64Field
#define GPBGetMessageUInt64Field __NS_SYMBOL(GPBGetMessageUInt64Field)
#endif

#ifndef GPBSetMessageUInt64Field
#define GPBSetMessageUInt64Field __NS_SYMBOL(GPBSetMessageUInt64Field)
#endif

#ifndef GPBSetUInt64IvarWithFieldInternal
#define GPBSetUInt64IvarWithFieldInternal __NS_SYMBOL(GPBSetUInt64IvarWithFieldInternal)
#endif

#ifndef GPBComputeSInt64SizeNoTag
#define GPBComputeSInt64SizeNoTag __NS_SYMBOL(GPBComputeSInt64SizeNoTag)
#endif

#ifndef GPBGetMessageFloatField
#define GPBGetMessageFloatField __NS_SYMBOL(GPBGetMessageFloatField)
#endif

#ifndef GPBSetMessageFloatField
#define GPBSetMessageFloatField __NS_SYMBOL(GPBSetMessageFloatField)
#endif

#ifndef GPBSetFloatIvarWithFieldInternal
#define GPBSetFloatIvarWithFieldInternal __NS_SYMBOL(GPBSetFloatIvarWithFieldInternal)
#endif

#ifndef GPBComputeSFixed64SizeNoTag
#define GPBComputeSFixed64SizeNoTag __NS_SYMBOL(GPBComputeSFixed64SizeNoTag)
#endif

#ifndef GPBGetMessageDoubleField
#define GPBGetMessageDoubleField __NS_SYMBOL(GPBGetMessageDoubleField)
#endif

#ifndef GPBSetMessageDoubleField
#define GPBSetMessageDoubleField __NS_SYMBOL(GPBSetMessageDoubleField)
#endif

#ifndef GPBSetDoubleIvarWithFieldInternal
#define GPBSetDoubleIvarWithFieldInternal __NS_SYMBOL(GPBSetDoubleIvarWithFieldInternal)
#endif

#ifndef GPBGetMessageStringField
#define GPBGetMessageStringField __NS_SYMBOL(GPBGetMessageStringField)
#endif

#ifndef GPBComputeSFixed32SizeNoTag
#define GPBComputeSFixed32SizeNoTag __NS_SYMBOL(GPBComputeSFixed32SizeNoTag)
#endif

#ifndef GPBSetMessageStringField
#define GPBSetMessageStringField __NS_SYMBOL(GPBSetMessageStringField)
#endif

#ifndef GPBGetMessageBytesField
#define GPBGetMessageBytesField __NS_SYMBOL(GPBGetMessageBytesField)
#endif

#ifndef GPBSetMessageBytesField
#define GPBSetMessageBytesField __NS_SYMBOL(GPBSetMessageBytesField)
#endif

#ifndef GPBGetMessageMessageField
#define GPBGetMessageMessageField __NS_SYMBOL(GPBGetMessageMessageField)
#endif

#ifndef GPBSetMessageMessageField
#define GPBSetMessageMessageField __NS_SYMBOL(GPBSetMessageMessageField)
#endif

#ifndef GPBGetMessageGroupField
#define GPBGetMessageGroupField __NS_SYMBOL(GPBGetMessageGroupField)
#endif

#ifndef GPBSetMessageGroupField
#define GPBSetMessageGroupField __NS_SYMBOL(GPBSetMessageGroupField)
#endif

#ifndef GPBSetMessageRepeatedField
#define GPBSetMessageRepeatedField __NS_SYMBOL(GPBSetMessageRepeatedField)
#endif

#ifndef GPBComputeBoolSizeNoTag
#define GPBComputeBoolSizeNoTag __NS_SYMBOL(GPBComputeBoolSizeNoTag)
#endif

#ifndef GPBSetMessageMapField
#define GPBSetMessageMapField __NS_SYMBOL(GPBSetMessageMapField)
#endif

#ifndef GPBComputeEnumSizeNoTag
#define GPBComputeEnumSizeNoTag __NS_SYMBOL(GPBComputeEnumSizeNoTag)
#endif

#ifndef GPBMessageEncodingForSelector
#define GPBMessageEncodingForSelector __NS_SYMBOL(GPBMessageEncodingForSelector)
#endif

#ifndef GPBTextFormatForMessage
#define GPBTextFormatForMessage __NS_SYMBOL(GPBTextFormatForMessage)
#endif

#ifndef GPBTextFormatForUnknownFieldSet
#define GPBTextFormatForUnknownFieldSet __NS_SYMBOL(GPBTextFormatForUnknownFieldSet)
#endif

#ifndef GPBDecodeTextFormatName
#define GPBDecodeTextFormatName __NS_SYMBOL(GPBDecodeTextFormatName)
#endif

#ifndef GPBComputeRawVarint64Size
#define GPBComputeRawVarint64Size __NS_SYMBOL(GPBComputeRawVarint64Size)
#endif

#ifndef GPBComputeRawVarint32Size
#define GPBComputeRawVarint32Size __NS_SYMBOL(GPBComputeRawVarint32Size)
#endif

#ifndef GPBComputeSizeTSizeAsInt32NoTag
#define GPBComputeSizeTSizeAsInt32NoTag __NS_SYMBOL(GPBComputeSizeTSizeAsInt32NoTag)
#endif

#ifndef GPBComputeStringSizeNoTag
#define GPBComputeStringSizeNoTag __NS_SYMBOL(GPBComputeStringSizeNoTag)
#endif

#ifndef GPBComputeRawVarint32SizeForInteger
#define GPBComputeRawVarint32SizeForInteger __NS_SYMBOL(GPBComputeRawVarint32SizeForInteger)
#endif

#ifndef GPBComputeGroupSizeNoTag
#define GPBComputeGroupSizeNoTag __NS_SYMBOL(GPBComputeGroupSizeNoTag)
#endif

#ifndef GPBComputeUnknownGroupSizeNoTag
#define GPBComputeUnknownGroupSizeNoTag __NS_SYMBOL(GPBComputeUnknownGroupSizeNoTag)
#endif

#ifndef GPBComputeMessageSizeNoTag
#define GPBComputeMessageSizeNoTag __NS_SYMBOL(GPBComputeMessageSizeNoTag)
#endif

#ifndef GPBComputeBytesSizeNoTag
#define GPBComputeBytesSizeNoTag __NS_SYMBOL(GPBComputeBytesSizeNoTag)
#endif

#ifndef GPBComputeDoubleSize
#define GPBComputeDoubleSize __NS_SYMBOL(GPBComputeDoubleSize)
#endif

#ifndef GPBComputeTagSize
#define GPBComputeTagSize __NS_SYMBOL(GPBComputeTagSize)
#endif

#ifndef GPBComputeFloatSize
#define GPBComputeFloatSize __NS_SYMBOL(GPBComputeFloatSize)
#endif

#ifndef GPBComputeUInt64Size
#define GPBComputeUInt64Size __NS_SYMBOL(GPBComputeUInt64Size)
#endif

#ifndef GPBComputeInt64Size
#define GPBComputeInt64Size __NS_SYMBOL(GPBComputeInt64Size)
#endif

#ifndef GPBComputeInt32Size
#define GPBComputeInt32Size __NS_SYMBOL(GPBComputeInt32Size)
#endif

#ifndef GPBComputeFixed64Size
#define GPBComputeFixed64Size __NS_SYMBOL(GPBComputeFixed64Size)
#endif

#ifndef GPBComputeFixed32Size
#define GPBComputeFixed32Size __NS_SYMBOL(GPBComputeFixed32Size)
#endif

#ifndef GPBComputeBoolSize
#define GPBComputeBoolSize __NS_SYMBOL(GPBComputeBoolSize)
#endif

#ifndef GPBClassHasSel
#define GPBClassHasSel __NS_SYMBOL(GPBClassHasSel)
#endif

#ifndef GPBComputeStringSize
#define GPBComputeStringSize __NS_SYMBOL(GPBComputeStringSize)
#endif

#ifndef GPBComputeGroupSize
#define GPBComputeGroupSize __NS_SYMBOL(GPBComputeGroupSize)
#endif

#ifndef GPBComputeUnknownGroupSize
#define GPBComputeUnknownGroupSize __NS_SYMBOL(GPBComputeUnknownGroupSize)
#endif

#ifndef GPBComputeMessageSize
#define GPBComputeMessageSize __NS_SYMBOL(GPBComputeMessageSize)
#endif

#ifndef GPBComputeBytesSize
#define GPBComputeBytesSize __NS_SYMBOL(GPBComputeBytesSize)
#endif

#ifndef GPBComputeUInt32Size
#define GPBComputeUInt32Size __NS_SYMBOL(GPBComputeUInt32Size)
#endif

#ifndef GPBComputeEnumSize
#define GPBComputeEnumSize __NS_SYMBOL(GPBComputeEnumSize)
#endif

#ifndef GPBComputeSFixed32Size
#define GPBComputeSFixed32Size __NS_SYMBOL(GPBComputeSFixed32Size)
#endif

#ifndef GPBComputeSFixed64Size
#define GPBComputeSFixed64Size __NS_SYMBOL(GPBComputeSFixed64Size)
#endif

#ifndef GPBComputeSInt32Size
#define GPBComputeSInt32Size __NS_SYMBOL(GPBComputeSInt32Size)
#endif

#ifndef GPBComputeSInt64Size
#define GPBComputeSInt64Size __NS_SYMBOL(GPBComputeSInt64Size)
#endif

#ifndef GPBComputeMessageSetExtensionSize
#define GPBComputeMessageSetExtensionSize __NS_SYMBOL(GPBComputeMessageSetExtensionSize)
#endif

#ifndef GPBComputeRawMessageSetExtensionSize
#define GPBComputeRawMessageSetExtensionSize __NS_SYMBOL(GPBComputeRawMessageSetExtensionSize)
#endif

#ifndef GPBComputeWireFormatTagSize
#define GPBComputeWireFormatTagSize __NS_SYMBOL(GPBComputeWireFormatTagSize)
#endif

#ifndef GPBGetMessageRepeatedField
#define GPBGetMessageRepeatedField __NS_SYMBOL(GPBGetMessageRepeatedField)
#endif

#ifndef GPBGetMessageMapField
#define GPBGetMessageMapField __NS_SYMBOL(GPBGetMessageMapField)
#endif

// Externs
#ifndef OBJC_PROTOCOL_$_AFImageCache
#define OBJC_PROTOCOL_$_AFImageCache __NS_SYMBOL(OBJC_PROTOCOL_$_AFImageCache)
#endif

#ifndef OBJC_PROTOCOL_$_AFImageRequestCache
#define OBJC_PROTOCOL_$_AFImageRequestCache __NS_SYMBOL(OBJC_PROTOCOL_$_AFImageRequestCache)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLResponseSerialization
#define OBJC_PROTOCOL_$_AFURLResponseSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLResponseSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_GPBMessageSignatureProtocol
#define OBJC_PROTOCOL_$_GPBMessageSignatureProtocol __NS_SYMBOL(OBJC_PROTOCOL_$_GPBMessageSignatureProtocol)
#endif

#ifndef OBJC_PROTOCOL_$_AFURLRequestSerialization
#define OBJC_PROTOCOL_$_AFURLRequestSerialization __NS_SYMBOL(OBJC_PROTOCOL_$_AFURLRequestSerialization)
#endif

#ifndef OBJC_PROTOCOL_$_AFMultipartFormData
#define OBJC_PROTOCOL_$_AFMultipartFormData __NS_SYMBOL(OBJC_PROTOCOL_$_AFMultipartFormData)
#endif

#ifndef OBJC_PROTOCOL_$_GPBDictionaryInternalsProtocol
#define OBJC_PROTOCOL_$_GPBDictionaryInternalsProtocol __NS_SYMBOL(OBJC_PROTOCOL_$_GPBDictionaryInternalsProtocol)
#endif

#ifndef IMSDKVendorVersionString
#define IMSDKVendorVersionString __NS_SYMBOL(IMSDKVendorVersionString)
#endif

#ifndef IMSDKVendorVersionNumber
#define IMSDKVendorVersionNumber __NS_SYMBOL(IMSDKVendorVersionNumber)
#endif

#ifndef GPBWellKnownTypesErrorDomain
#define GPBWellKnownTypesErrorDomain __NS_SYMBOL(GPBWellKnownTypesErrorDomain)
#endif

#ifndef AFNetworkingReachabilityDidChangeNotification
#define AFNetworkingReachabilityDidChangeNotification __NS_SYMBOL(AFNetworkingReachabilityDidChangeNotification)
#endif

#ifndef AFNetworkingReachabilityNotificationStatusItem
#define AFNetworkingReachabilityNotificationStatusItem __NS_SYMBOL(AFNetworkingReachabilityNotificationStatusItem)
#endif

#ifndef GPBCodedInputStreamException
#define GPBCodedInputStreamException __NS_SYMBOL(GPBCodedInputStreamException)
#endif

#ifndef GPBCodedInputStreamUnderlyingErrorKey
#define GPBCodedInputStreamUnderlyingErrorKey __NS_SYMBOL(GPBCodedInputStreamUnderlyingErrorKey)
#endif

#ifndef GPBCodedInputStreamErrorDomain
#define GPBCodedInputStreamErrorDomain __NS_SYMBOL(GPBCodedInputStreamErrorDomain)
#endif

#ifndef AFURLResponseSerializationErrorDomain
#define AFURLResponseSerializationErrorDomain __NS_SYMBOL(AFURLResponseSerializationErrorDomain)
#endif

#ifndef AFNetworkingOperationFailingURLResponseErrorKey
#define AFNetworkingOperationFailingURLResponseErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLResponseErrorKey)
#endif

#ifndef AFNetworkingOperationFailingURLResponseDataErrorKey
#define AFNetworkingOperationFailingURLResponseDataErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLResponseDataErrorKey)
#endif

#ifndef GPBCodedOutputStreamException_OutOfSpace
#define GPBCodedOutputStreamException_OutOfSpace __NS_SYMBOL(GPBCodedOutputStreamException_OutOfSpace)
#endif

#ifndef GPBCodedOutputStreamException_WriteFailed
#define GPBCodedOutputStreamException_WriteFailed __NS_SYMBOL(GPBCodedOutputStreamException_WriteFailed)
#endif

#ifndef AFNetworkingTaskDidResumeNotification
#define AFNetworkingTaskDidResumeNotification __NS_SYMBOL(AFNetworkingTaskDidResumeNotification)
#endif

#ifndef AFNetworkingTaskDidCompleteNotification
#define AFNetworkingTaskDidCompleteNotification __NS_SYMBOL(AFNetworkingTaskDidCompleteNotification)
#endif

#ifndef AFNetworkingTaskDidSuspendNotification
#define AFNetworkingTaskDidSuspendNotification __NS_SYMBOL(AFNetworkingTaskDidSuspendNotification)
#endif

#ifndef AFURLSessionDidInvalidateNotification
#define AFURLSessionDidInvalidateNotification __NS_SYMBOL(AFURLSessionDidInvalidateNotification)
#endif

#ifndef AFURLSessionDownloadTaskDidFailToMoveFileNotification
#define AFURLSessionDownloadTaskDidFailToMoveFileNotification __NS_SYMBOL(AFURLSessionDownloadTaskDidFailToMoveFileNotification)
#endif

#ifndef AFNetworkingTaskDidCompleteSerializedResponseKey
#define AFNetworkingTaskDidCompleteSerializedResponseKey __NS_SYMBOL(AFNetworkingTaskDidCompleteSerializedResponseKey)
#endif

#ifndef AFNetworkingTaskDidCompleteResponseSerializerKey
#define AFNetworkingTaskDidCompleteResponseSerializerKey __NS_SYMBOL(AFNetworkingTaskDidCompleteResponseSerializerKey)
#endif

#ifndef AFNetworkingTaskDidCompleteResponseDataKey
#define AFNetworkingTaskDidCompleteResponseDataKey __NS_SYMBOL(AFNetworkingTaskDidCompleteResponseDataKey)
#endif

#ifndef AFNetworkingTaskDidCompleteErrorKey
#define AFNetworkingTaskDidCompleteErrorKey __NS_SYMBOL(AFNetworkingTaskDidCompleteErrorKey)
#endif

#ifndef AFNetworkingTaskDidCompleteAssetPathKey
#define AFNetworkingTaskDidCompleteAssetPathKey __NS_SYMBOL(AFNetworkingTaskDidCompleteAssetPathKey)
#endif

#ifndef AFURLRequestSerializationErrorDomain
#define AFURLRequestSerializationErrorDomain __NS_SYMBOL(AFURLRequestSerializationErrorDomain)
#endif

#ifndef AFNetworkingOperationFailingURLRequestErrorKey
#define AFNetworkingOperationFailingURLRequestErrorKey __NS_SYMBOL(AFNetworkingOperationFailingURLRequestErrorKey)
#endif

#ifndef kAFUploadStream3GSuggestedPacketSize
#define kAFUploadStream3GSuggestedPacketSize __NS_SYMBOL(kAFUploadStream3GSuggestedPacketSize)
#endif

#ifndef kAFUploadStream3GSuggestedDelay
#define kAFUploadStream3GSuggestedDelay __NS_SYMBOL(kAFUploadStream3GSuggestedDelay)
#endif

#ifndef GPBMessageErrorDomain
#define GPBMessageErrorDomain __NS_SYMBOL(GPBMessageErrorDomain)
#endif

#ifndef GPBErrorReasonKey
#define GPBErrorReasonKey __NS_SYMBOL(GPBErrorReasonKey)
#endif

