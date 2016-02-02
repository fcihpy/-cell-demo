//
//  FCCustomCell.h
//  不等高cell demo
//
//  Created by locojoy on 16/2/2.
//  Copyright © 2016年 fcihpy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FCCellModel.h"

@interface FCCustomCell : UITableViewCell

@property (nonatomic,strong) FCCellModel *cellModel;
//@property (nonatomic,assign) CGFloat      cellHeight;

+ (instancetype)cellWithTableView:(UITableView *)tableView reuseID:(NSString *)reuseID;

@end
