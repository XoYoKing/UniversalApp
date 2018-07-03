//
//  LTSandboxTool.h
//  UniversalApp
//
//  Created by huanyu.li on 2018/5/20.
//  Copyright © 2018年 huanyu.li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LTSandboxTool : NSObject

/**  单个文件的大小  */
+ (long long)fileSizeAtPath:(NSString*)filePath;
/**  遍历文件夹获得文件夹大小，返回多少M  */
+ (float)folderSizeAtPath:(NSString *)folderPath;
/**  清除指定文件  */
+ (BOOL)clearItemAtPath:(NSString *)filePath;
/**  清除指定文件夹缓存  */
+ (BOOL)clearfolderItemsAtPath:(NSString *)folderPath;
+ (BOOL)createFolder:(NSString *)folderPath;
/** 将数据写入文件 */
+ (BOOL)writeDataItem:(NSData *)itemData withName:(NSString *)savedName toFolder:(NSString *)folderPath;


#pragma mark - 文件夹相关操作
+ (NSString *)createFolderInCachesDirectoryWithFolderName:(NSString *)folderName;

#pragma mark - 系统路径相关类方法
/**
 Get URL of Documents directory.
 
 @return Documents directory URL.
 */
+ (NSURL *)documentsURL;

/**
 Get path of Documents directory.
 
 @return Documents directory path.
 */
+ (NSString *)documentsPath;

/**
 Get URL of Library directory.
 
 @return Library directory URL.
 */
+ (NSURL *)libraryURL;

/**
 Get path of Library directory.
 
 @return Library directory path.
 */
+ (NSString *)libraryPath;

/**
 Get URL of Caches directory.
 
 @return Caches directory URL.
 */
+ (NSURL *)cachesURL;

/**
 Get path of Caches directory.
 
 @return Caches directory path.
 */
+ (NSString *)cachesPath;

/**
 Adds a special filesystem flag to a file to avoid iCloud backup it.
 
 @param path Path to a file to set an attribute.
 */
+ (BOOL)addSkipBackupAttributeToFile:(NSString *)path;

/**
 Get available disk space.
 
 @return An amount of available disk space in Megabytes.
 */
+ (double)availableDiskSpace;


@end