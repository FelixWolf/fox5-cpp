# fox5-cpp
Fox5 parser in C++

# Where is fox5cipher?
Not publicly available, specifically:
```cpp
// Copyright (c) 2024, Kyler Eastridge. All rights reserved.
//
// This software is confidential and proprietary information of Dragon's Eye Production.
// You shall not disclose such Confidential Information and shall use it only in
// accordance with the terms of the license agreement you entered into with
// Dragon's Eye Production.
```

As in, unless you get permission from Dragon's Eye Production themself, I cannot / will not disclose it.
 If you are so inclined to, you may figure it out like I did. Here is the header you need to use in it's place:
```h
void Fox5Cipher(std::vector<uint8_t>& data, uint32_t compressedSize, uint32_t uncompressedSize, const uint8_t seed[16])
```
I believe anyone who has the ability to figure out the encryption mechanism knows what they are doing and *why it is a __bad idea__* to disclose such information to the public.

# LZMA included!
This source includes sources from the [LZMA SDK](https://www.7-zip.org/sdk.html), specifically:
* src/Compiler.h
* src/Precomp.h
* src/7zTypes.h
* src/LzmaDec.c
* src/LzmaDec.h

These files are **PUBLIC DOMAIN** as per:
> LZMA SDK is placed in the **public domain**.

> Anyone is free to copy, modify, publish, use, compile, sell, or distribute the original LZMA SDK code, either in source code form or as a compiled binary, for any purpose, commercial or non-commercial, and by any means.

Despite this, I feel it is important for me to clarify that these are not files I made myself.
