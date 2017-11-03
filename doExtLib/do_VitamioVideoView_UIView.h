//
//  do_VitamioVideoView_View.h
//  DoExt_UI
//
//  Created by @userName on @time.
//  Copyright (c) 2015年 DoExt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "do_VitamioVideoView_IView.h"
#import "do_VitamioVideoView_UIModel.h"
#import "doIUIModuleView.h"

@interface do_VitamioVideoView_UIView : UIView<do_VitamioVideoView_IView, doIUIModuleView>
//可根据具体实现替换UIView
{
	@private
		__weak do_VitamioVideoView_UIModel *_model;
}

@end
