//
//  TZPhotoPickerController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class TZAlbumModel, TZCollectionView;
@interface TZPhotoPickerController : UIViewController

@property (nonatomic, assign) BOOL isFirstAppear;
@property (nonatomic, assign) NSInteger columnNumber;
@property (nonatomic, strong) TZAlbumModel *model;
@property (strong, nonatomic) CLLocation *location;
@property (nonatomic, strong) NSMutableArray *models;
@property (nonatomic, strong, readonly) TZCollectionView *collectionView;

- (void)refreshBottomToolBarStatus;
    
@end

@interface TZCollectionView : UICollectionView

@end
