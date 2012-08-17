//
//  AFHTTPClientPlus.h
//  
//
//  Created by Douglas Edmonson on 08/17/2012.
//
//

#import <Foundation/Foundation.h>

@interface AFHTTPClientPlus : AFHTTPClient

/**
 This specifies where the paramaters for a DELETE request are encoded, YES for in the URL and NO for in the HTTP Request Body. Is Yes by default to support backwords compatability.
 */
@property (nonatomic, assign, getter=isDeleteParamsEncodedInURL) BOOL deleteParamsEncodedInURL;

@end
