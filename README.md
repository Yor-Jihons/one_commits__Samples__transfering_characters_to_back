# one_commits__Samples__transfering_characters_to_back

This is a sample so that I can commit this to the GitHub.

## 1. Question

半角英数字で構成された文字列Sが与えられる。このSに以下の処理を行い。その結果の文字列を表示するプログラムを組め。
ただし、異常系については考慮しないものとする。

1. 文字列Sの先端を末尾に持っていく
2. 1をN回繰り返す

Inputs 1の場合、以下のようになる。

1. S' = { a, b, c, d }
2. S' = { b, c, d, a }
3. S' = { c, d, a, b }

## 2. Conditions

```
3≦|S|≦20
```

## 3. Inputs and Outputs

### 3.1. Inputs

```
N
S
```

一行目に回数Nが与えられ、二行目に文字列Sが与えられる。

### 3.2. Outputs

```
S'
```

処理を施したS'を表示する。

### 3.3. Examples

#### 3.3.1. Inputs 1

```
2
abcd
```
#### 3.3.2. Outputs 1

```
cdab
```

※ Inputs 1 は input1.txt, Output 1 は output1.txt に記述されているとする。
