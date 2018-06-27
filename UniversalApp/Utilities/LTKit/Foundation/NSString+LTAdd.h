//
//  NSString+LTAdd.h
//  UniversalApp
//
//  Created by huanyu.li on 2018/5/19.
//  Copyright © 2018年 huanyu.li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LTAdd)

/**  阿拉伯数字转中文  */
- (NSString *)numbersToChinese;
+ (NSString *)numbersToChinese:(double)number;

#pragma mark - 二维码/条形码
/**
 生成二维码【白底黑色】

 @param size 生成图片的大小
 @return UIImage图片对象
 */
- (UIImage*)QRCodeImageWithSize:(CGSize)size;

/**
 生成二维码【自定义颜色】

 @param size 生成图片的大小
 @param QRCodeColor 二维码颜色
 @param backgroundColor 背景色
 @return UIImage图片对象
 */
- (UIImage* )QRCodeImageWithSize:(CGSize)size color:(UIColor*)QRCodeColor backgroundColor:(UIColor*)backgroundColor;

/**
 生成条形码【白底黑色】

 @param size 生成条码图片的大小
 @return UIImage图片对象
 */
- (UIImage *)BarCodeImageWithSize:(CGSize)size;

/**
 生成条形码【自定义颜色】

 @param size 生成条形码图片的大小
 @param barCodeColor 条形码颜色
 @param backgroundColor 背景色
 @return UIImage图片对象
 */
- (UIImage* )BarCodeImageWithSize:(CGSize)size color:(UIColor*)barCodeColor backgroundColor:(UIColor*)backgroundColor;

#pragma mark - 高精度的数字加减乘除
/**  加法:self + decimalNumber  */
- (NSString *)decimalNumberByAdding:(NSString *)decimalNumber;
/**  减法:self - decimalNumber  */
- (NSString *)decimalNumberBySubtracting:(NSString *)decimalNumber;
/**  乘法:self * decimalNumber  */
- (NSString *)decimalNumberByMultiplyingBy:(NSString *)decimalNumber;
/**  除法:self / decimalNumber  */
- (NSString *)decimalNumberByDividingBy:(NSString *)decimalNumber;

#pragma mark - 数字
+ (instancetype)stringWithCGFloat:(CGFloat)floatValue decimal:(NSUInteger)decimal;

@end
