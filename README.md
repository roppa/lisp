# Lisp

I'm going through 'build your own Lisp' and these are some of my notes.

## Definitions

  <dl>
    <dt>function definition</dt>
    <dd>functions do things, take things in, give things back</dd>
    <dt>structure definition</dt>
    <dd>custom data types</dd>
    <dt>main</dt>
    <dd>a c program always starts from the main function</dd>
  </dl>

## C

A program in C consists of only functions and structure definitions.

### Compiling

To compile run ```cc filename.c```

This creates an a.out file. To execute run ```./a.out```

To specify a name instead of the default a.out, use `-o`. `-std=c99` specifies the version.

```
cc -std=c99 -Wall hello.c -o hello_world
```

Run with `./c/hello/hello_world`.

## Examples

Under `/c` is my example c code.

## Debugging

- [lldb](https://lldb.llvm.org/)

## Testing

