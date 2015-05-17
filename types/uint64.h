/**
 *  Copyright 2009-2014 MongoDB, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#ifndef __TYPES_UINT64_H__
#define __TYPES_UINT64_H__

PHP_METHOD(MongoUint64, __construct);
PHP_METHOD(MongoUint64, __toString);

#define ZVAL_ULONG(z, l) {\
		zval *__z = (z);\
		Z_LVAL_P(__z) = l;\
		Z_TYPE_INFO_P(__z) = IS_ULONG;\
	}

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: fdm=marker
 * vim: noet sw=4 ts=4
 */
