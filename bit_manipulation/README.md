t manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms, and optimization. For most other tasks, modern programming languages allow the programmer to work directly with abstractions instead of bits that represent those abstractions. Source code that does bit manipulation makes use of the bitwise operations: AND, OR, XOR, NOT, and possibly other operations analogous to the boolean operators; there are also bit shifts and operations to count ones and zeros, find high and low one or zero, set, reset and test bits, extract and insert fields, mask and zero fields, gather and scatter bits to and from specified bit positions or fields. Integer arithmetic operators can also effect bit-operations in conjunction with the other operators.

Bit manipulation, in some cases, can obviate or reduce the need to loop over a data structure and can give many-fold speed ups, as bit manipulations are processed in parallel.To determine if a number is a power of two, conceptually we may repeatedly do integer divide by two until the number won't divide by 2 evenly; if the only factor left is 1, the original number was a power of 2. Using bit and logical operators, there is a simple expression which will return true (1) or false (0):

 bool isPowerOfTwo = (x != 0) && ((x & (x - 1)) == 0);
The second method uses the fact that powers of two have one and only one bit set in their binary representation:

x         == 0...010...0
x-1       == 0...001...1
x & (x-1) == 0...000...0
If the number is neither zero nor a power of two, it will have '1' in more than one place:

x         == 0...1...010...0
x-1       == 0...1...001...1
x & (x-1) == 0...1...000...0
If inline assembly language code is used, then an instruction that counts the number of 1's or 0's in the operand might be available; an operand with exactly one '1' bit is a power of 2. However, such an instruction may have greater latency than the bitwise method above.

Bit manipulation operations
See also: Bit Manipulation Instruction Sets
Processors typically provide only a subset of the useful bit operators. Programming languages don't directly support most bit operations, so idioms must be used to code them. The 'C' programming language, for example provides only bit-wise AND(&), OR(|), XOR(^) and NOT(~). Fortran provides AND(.and.), OR (.or.), XOR (.neqv.) and EQV(.eqv.). Algol provides syntactic bitfield extract and insert. When languages provide bit operations that don't directly map to hardware instructions, compilers must synthesize the operation from available operators.

An especially useful bit operation is count leading zeros used to find the high set bit of a machine word, though it may have different names on various architectures.[1] There's no simple programming language idiom, so it must be provided by a compiler intrinsic or system library routine. Without that operator, it is very expensive (see Find first set#CLZ) to do any operations with regard to the high bit of a word, due to the asymmetric carry-propagate of arithmetic operations. Fortunately, most cpu architectures have provided that since the middle 1980s. An accompanying operation count ones, also called POPCOUNT, which counts the number of set bits in a machine word, is also usually provided as a hardware operator. Simpler bit operations like bit set, reset, test and toggle are often provided as hardware operators, but are easily simulated if they aren't - for example (SET R0, 1; LSHFT R0, i; OR x, R0) sets bit i in operand x.

Some of the more useful and complex bit operations that must be coded as idioms in the programming language and synthesized by compilers include:

clear from specified bit position up (leave lower part of word)
clear from specified bit position down (leave upper part of word)
mask from low bit down (clear lower word)
mask from high bit up (clear lower word)
bitfield extract
bitfield insert
bitfield scatter/gather operations which distribute contiguous portions of a bitfield over a machine word, or gather disparate bitfields in the word into a contiguous portion of a bitfield (see recent Intel PEXT/PDEP operators). Used by cryptography and video encoding.
matrix inversion
Some arithmetic operations can be reduced to simpler operations and bit operations:

reduce multiply by constant to sequence of shift-add
Multiply by 9 for example, is copy operand, shift up by 3 (multiply by 8), and add to original operand.

reduce division by constant to sequence of shift-subtract
Masking
Main article: mask (computing)
A mask is data that is used for bitwise operations, particularly in a bit field.

Using a mask, multiple bits in a Byte, nibble, word (etc.) can be set either on, off or inverted from on to off (or vice versa) in a single bitwise operation. More comprehensive applications of masking, when applied conditionally to operations, are termed predication.
