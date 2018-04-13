//
//  IntereactViewController.m
//  Touhu
//
//  Created by csco on 2018/4/12.
//  Copyright © 2018年 csco. All rights reserved.
//

#import "IntereactViewController.h"

@interface IntereactViewController ()<UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
//=========================================================================
@property (weak, nonatomic) IBOutlet UIImageView *showView;

@property (weak, nonatomic) IBOutlet UITableView *timeLineTable;
@property (weak, nonatomic) IBOutlet UITableView *programTable;
@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@end

@implementation IntereactViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [self.navigationController.navigationBar setBackgroundImage:[UIImage imageNamed:@"transparence"] forBarMetrics:UIBarMetricsDefault];
}

- (void)viewWillDisappear:(BOOL)animated
{
    [super viewWillDisappear:animated];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark-- UITableViewDelegate UITableViewDataSource

- (nonnull UITableViewCell *)tableView:(nonnull UITableView *)tableView cellForRowAtIndexPath:(nonnull NSIndexPath *)indexPath
{
    if (tableView == self.timeLineTable) {
        UITableViewCell * cell =[tableView dequeueReusableCellWithIdentifier:@"timeline" forIndexPath:indexPath];
        cell.textLabel.text = [NSString stringWithFormat:@"04月%02ld日", (long)indexPath.row+1];
        
        return cell;
    }else{
        UITableViewCell * cell =[tableView dequeueReusableCellWithIdentifier:@"program" forIndexPath:indexPath];
        cell.textLabel.text = [NSString stringWithFormat:@"%02ld:30", (long)indexPath.row+1];
        return cell;
    }
    
}

- (NSInteger)tableView:(nonnull UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (tableView == self.timeLineTable) {
        return 15;
    }else{
        return 15;
    }
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (tableView == self.timeLineTable) {
        [self.programTable reloadData];
    }else{
        
    }
}

#pragma mark-- UICollectionViewDataSource

- (nonnull __kindof UICollectionViewCell *)collectionView:(nonnull UICollectionView *)collectionView cellForItemAtIndexPath:(nonnull NSIndexPath *)indexPath {
    UICollectionViewCell * cell = [collectionView dequeueReusableCellWithReuseIdentifier:@"channel" forIndexPath:indexPath];
    
    return cell;
}

- (NSInteger)collectionView:(nonnull UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
    return 8;
}



/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
