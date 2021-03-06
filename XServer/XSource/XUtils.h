/******************************************************************************************
  Copyright 2013 Christian Roggia

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
******************************************************************************************/

#ifndef __X_UTILS__
#define __X_UTILS__

#include <ctype.h>
#include <string.h>

namespace XUtils
{
	char *atoip(char *in);
	
	char *strcln(char *in);
	
	long long ntohll(long long __hostlong);
	long long htonll(long long __hostlong);
	
	bool is_number(char *szString);
}

#endif