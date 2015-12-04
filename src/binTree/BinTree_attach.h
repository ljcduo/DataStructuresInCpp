/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> //二叉树子树接入算法：将S当作节点x的左子树接入，S本身置空
BinNodePosi(T) BinTree<T>::attachAsLC(BinNodePosi(T) x, BinTree<T>* &S) { //x->lChild == NULL
   if (x->lChild = S->_root) x->lChild->parent = x; //接入
   _size += S->_size; updateHeightAbove(x); //更新全树规模与x所有祖先的高度
   S->_root = NULL; S->_size = 0; release(S); S = NULL; return x; //释放原树，返回接入位置
}

template <typename T> //二叉树子树接入算法：将S当作节点x的右子树接入，S本身置空
BinNodePosi(T) BinTree<T>::attachAsRC(BinNodePosi(T) x, BinTree<T>* &S) { //x->rChild == NULL
   if (x->rChild = S->_root) x->rChild->parent = x; //接入
   _size += S->_size; updateHeightAbove(x); //更新全树规模与x所有祖先的高度
   S->_root = NULL; S->_size = 0; release(S); S = NULL; return x; //释放原树，返回接入位置
}