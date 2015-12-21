# BRKeychain
Simple keychain tool
## Usage
##### 读取 UUID
```
- (void)readUUID {
    NSMutableDictionary *keychainAccess = (NSMutableDictionary *)[BRKeychain load:BUNDLE_KEY];
    if ([keychainAccess objectForKey:UUID_KEY] != nil) {
        NSLog(@"在钥匙串中UUID的值为: %@", [keychainAccess objectForKey:UUID_KEY]);
    }
}
```


#### 保存 UUID
```
- (void)saveUUID {
    NSString *UUID = @"testStr";
    NSMutableDictionary *keychainAccess = [NSMutableDictionary dictionary];
    [keychainAccess setObject:UUID forKey:UUID_KEY];
    [BRKeychain save:BUNDLE_KEY data:keychainAccess];
}
```


#### 删除 UUID
```
- (void)deleteKeychainAccess {
    [BRKeychain deleteData:BUNDLE_KEY];
}
```


