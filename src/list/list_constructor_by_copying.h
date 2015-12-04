/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //assert: p为合法位置，且至少有n-1个后继节点
List<T>::List(ListNodePosi(T) p, int n) { copyNodes(p, n); } //复制列表中自位置p起的n项

template <typename T>
List<T>::List(List<T> const & L) { copyNodes(L.first(), L._size); } //整体复制列表L

template <typename T> //assert: r+n <= L._size
List<T>::List(List<T> const & L, int r, int n) { copyNodes(L[r], n); } //复制L中自第r项起的n项