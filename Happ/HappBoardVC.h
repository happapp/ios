//
//  HappBoardVCViewController.h
//  Happ
//
//  Created by Brandon Krieger on 9/6/13.
//  Copyright (c) 2013 Happ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/ABPeoplePickerNavigationController.h>
#import <MessageUI/MessageUI.h>
#import "HappModelDelegate.h"
#import "HappComposeVCDelegate.h"

@interface HappBoardVC : UITableViewController<HappModelDelegate, HappComposeVCDelegate, MFMessageComposeViewControllerDelegate>

@end
