// Generated by Apple Swift version 2.0 (swiftlang-700.0.59 clang-700.0.72)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#import "/Users/mariuszwisniewski/Developing/GitHub/todo-app-syncano/todo-app-syncano-Bridging-Header.h"

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;
@class NSURL;
@class NSManagedObjectModel;
@class NSPersistentStoreCoordinator;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC16todo_app_syncano11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
@property (nonatomic) NSURL * __nonnull applicationDocumentsDirectory;
@property (nonatomic) NSManagedObjectModel * __nonnull managedObjectModel;
@property (nonatomic) NSPersistentStoreCoordinator * __nullable persistentStoreCoordinator;
@property (nonatomic) NSManagedObjectContext * __nullable managedObjectContext;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS("_TtC16todo_app_syncano4Todo")
@interface Todo : SCDataObject
@property (nonatomic, copy) NSString * __nonnull title;
@property (nonatomic) BOOL isCompleted;
- (void)setNilValueForKey:(NSString * __nonnull)key;
+ (NSDictionary * __nonnull)extendedPropertiesMapping;
+ (Todo * __nonnull)fromDictionary:(id __null_unspecified)dictionary;
- (nullable instancetype)initWithDictionary:(NSDictionary * __null_unspecified)dictionaryValue error:(NSError * __nullable * __null_unspecified)error OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithCoder:(NSCoder * __null_unspecified)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class Syncano;
@class SCChannel;
@class UITableView;
@class NSBundle;

SWIFT_CLASS("_TtC16todo_app_syncano14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, copy) NSArray<Todo *> * __nonnull todoItems;
@property (nonatomic, readonly) Syncano * __null_unspecified syncano;
@property (nonatomic) SCChannel * __nonnull channel;
@property (nonatomic, weak) IBOutlet UITableView * __null_unspecified tableView;
- (void)viewDidLoad;
- (void)setupUI;
- (void)didReceiveMemoryWarning;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)reloadTableView;
- (void)reloadRowAtIndex:(NSInteger)index;
- (void)insertRowAtIndex:(NSInteger)index;
- (void)deleteRowAtIndex:(NSInteger)index;
- (void)showAlertController:(NSString * __nonnull)title okActionTitle:(NSString * __nonnull)okActionTitle cancelActionTitle:(NSString * __nonnull)cancelActionTitle todoItem:(Todo * __nonnull)todoItem finalAction:(void (^ __nonnull)(void))finalAction;
- (void)plusButtonPressed;
- (void)refreshButtonPressed;
- (void)downloadTodoItemsFromSyncano;
- (void)deleteTodoItemFromSyncano:(Todo * __nonnull)todo;
- (void)saveTodoItemToSyncano:(Todo * __nonnull)todo;
- (void)reverseTodoItemCompletedStateAtSyncano:(Todo * __nonnull)todo;
- (void)deleteTodoItemAtIndex:(NSInteger)index;
- (void)editTodoItemAtIndex:(NSInteger)index;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSIndexPath;

@interface ViewController (SWIFT_EXTENSION(todo_app_syncano)) <UITableViewDelegate, UIScrollViewDelegate>
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (CGFloat)tableView:(UITableView * __nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end

@class MGSwipeTableCell;
@class UITableViewCell;

@interface ViewController (SWIFT_EXTENSION(todo_app_syncano)) <UITableViewDataSource>
- (MGSwipeTableCell * __nonnull)giveMeNewSwipeCell:(UITableView * __nonnull)tableView identifier:(NSString * __nonnull)identifier;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
@end

@class SCChannelNotificationMessage;

@interface ViewController (SWIFT_EXTENSION(todo_app_syncano)) <SCChannelDelegate>
- (NSInteger)getObjectIdFromMessage:(SCChannelNotificationMessage * __nonnull)message;
- (Todo * __nullable)findTodoObjectWithIdInArray:(NSInteger)objectId;
- (void)addItemFromMessage:(SCChannelNotificationMessage * __nonnull)message;
- (void)deleteItemFromMessage:(SCChannelNotificationMessage * __nonnull)message;
- (void)updateItemFromMessage:(SCChannelNotificationMessage * __nonnull)message;
- (void)chanellDidReceivedNotificationMessage:(SCChannelNotificationMessage * __null_unspecified)notificationMessage;
@end

#pragma clang diagnostic pop
