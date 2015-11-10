/*|~^~|Copyright (c) 2008-2015, Massachusetts Institute of Technology (MIT)
 |~^~|All rights reserved.
 |~^~|
 |~^~|Redistribution and use in source and binary forms, with or without
 |~^~|modification, are permitted provided that the following conditions are met:
 |~^~|
 |~^~|-1. Redistributions of source code must retain the above copyright notice, this
 |~^~|ist of conditions and the following disclaimer.
 |~^~|
 |~^~|-2. Redistributions in binary form must reproduce the above copyright notice,
 |~^~|this list of conditions and the following disclaimer in the documentation
 |~^~|and/or other materials provided with the distribution.
 |~^~|
 |~^~|-3. Neither the name of the copyright holder nor the names of its contributors
 |~^~|may be used to endorse or promote products derived from this software without
 |~^~|specific prior written permission.
 |~^~|
 |~^~|THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 |~^~|AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 |~^~|IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 |~^~|DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 |~^~|FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 |~^~|DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 |~^~|SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 |~^~|CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 |~^~|OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 |~^~|OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\*/
//
//  IncidentButtonBar.h
//  NICS Mobile
//
//

#import <UIKit/UIKit.h>

#import "SimpleReportDetailViewController.h"
#import "IncidentCanvasUIViewController.h"
#import "SimpleReportListViewController.h"
#import "DamageReportDetailViewController.h"
#import "DamageReportListViewController.h"
#import "ResourceRequestDetailViewController.h"
#import "ResourceRequestListViewController.h"
#import "FieldReportDetailViewController.h"
#import "FieldReportListViewController.h"
#import "UxoReportDetailViewController.h"
#import "UxoReportListViewController.h"
#import "LoginViewController.h"
#import "ChatContainerBasicViewController.h"
#import "MapMarkupViewController.h"

@class SimpleReportListViewController;
@class SimpleReportDetailViewController;

@interface IncidentButtonBar : NSObject

+ (void)SaveDraftButtonPressed:(NSString*)currentReport;
+ (void)AddButtonPressed:(NSString*)currentReport;
+ (void)CancelButtonPressed:(NSString*)currentReport;
+ (void)SubmitButtonPressed:(NSString*)currentReport;

+ (void)SetIncidentCanvasController:(IncidentCanvasUIViewController*)controller;
+ (IncidentCanvasUIViewController*) GetIncidentCanvasController;

+ (void)OpenImagePickerCameraForTablet:(UIImagePickerController*)imagePicker;

+ (void)SetIncidentCanvas:(UIView*)view;
+ (UIView*) GetIncidentCanvas;

+(void)SetLoginView:(LoginViewController*)loginController;
+(LoginViewController*)GetLoginView;

+(void)SetGeneralMessageListview:(SimpleReportListViewController*)listController;
+(SimpleReportListViewController*)GetGeneralMessageListview;

+(void)SetGeneralMessageDetailView:(SimpleReportDetailViewController*)detailController;
+(SimpleReportDetailViewController*) GetGeneralMessageDetailView;

+(void)SetDamageReportListview:(DamageReportListViewController*)listController;
+(DamageReportListViewController*)GetDamageReportListview;

+(void)SetDamageReportDetailView:(DamageReportDetailViewController*)detailController;
+(DamageReportDetailViewController*) GetDamageReportDetailView;

+(void)SetResourceRequestListview:(ResourceRequestListViewController*)listController;
+(ResourceRequestListViewController*)GetResourceRequestListview;

+(void)SetResourceRequestDetailView:(ResourceRequestDetailViewController*)detailController;
+(ResourceRequestDetailViewController*) GetResourceRequestDetailView;

+(void)SetFieldReportListview:(FieldReportListViewController*)listController;
+(FieldReportListViewController*)GetFieldReportListview;

+(void)SetFieldReportDetailView:(FieldReportDetailViewController*)detailController;
+(FieldReportDetailViewController*) GetFieldReportDetailView;

+(void)SetUxoReportListview:(UxoReportListViewController*)listController;
+(UxoReportListViewController*)GetUxoReportListview;

+(void)SetUxoReportDetailView:(UxoReportDetailViewController*)detailController;
+(UxoReportDetailViewController*) GetUxoReportDetailView;

+(void)SetChatController:(ChatContainerBasicViewController*)detailController;
+(ChatContainerBasicViewController*) GetChatController;

+(void)SetMapMarkupController:(MapMarkupViewController*)mapController;
+(MapMarkupViewController*) GetMapMarkupController;

+ (void)SetAddButton:(UIButton*)button;
+ (UIButton*)GetAddButton;

+ (void)SetSaveDraftButton:(UIButton*)button;
+ (UIButton*)GetSaveDraftButton;

+ (void)SetCancelButton:(UIButton*)button;
+ (UIButton*)GetCancelButton;

+ (void)SetSubmitButton:(UIButton*)button;
+ (UIButton*)GetSubmitButton;
@end