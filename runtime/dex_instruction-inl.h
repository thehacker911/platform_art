/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_DEX_INSTRUCTION_INL_H_
#define ART_RUNTIME_DEX_INSTRUCTION_INL_H_

#include "dex_instruction.h"

namespace art {

//------------------------------------------------------------------------------
// VRegA
//------------------------------------------------------------------------------
inline int8_t Instruction::VRegA_10t(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k10t);
  return static_cast<int8_t>(InstAA(inst_data));
}

inline uint8_t Instruction::VRegA_10x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k10x);
  return InstAA(inst_data);
}

inline uint4_t Instruction::VRegA_11n(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k11n);
  return InstA(inst_data);
}

inline uint8_t Instruction::VRegA_11x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k11x);
  return InstAA(inst_data);
}

inline uint4_t Instruction::VRegA_12x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k12x);
  return InstA(inst_data);
}

inline int16_t Instruction::VRegA_20t() const {
  DCHECK_EQ(FormatOf(Opcode()), k20t);
  return static_cast<int16_t>(Fetch16(1));
}

inline uint8_t Instruction::VRegA_21c(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k21c);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_21h(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k21h);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_21s(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k21s);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_21t(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k21t);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_22b(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22b);
  return InstAA(inst_data);
}

inline uint4_t Instruction::VRegA_22c(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22c);
  return InstA(inst_data);
}

inline uint4_t Instruction::VRegA_22s(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22s);
  return InstA(inst_data);
}

inline uint4_t Instruction::VRegA_22t(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22t);
  return InstA(inst_data);
}

inline uint8_t Instruction::VRegA_22x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22x);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_23x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k23x);
  return InstAA(inst_data);
}

inline int32_t Instruction::VRegA_30t() const {
  DCHECK_EQ(FormatOf(Opcode()), k30t);
  return static_cast<int32_t>(Fetch32(1));
}

inline uint8_t Instruction::VRegA_31c(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k31c);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_31i(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k31i);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_31t(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k31t);
  return InstAA(inst_data);
}

inline uint16_t Instruction::VRegA_32x() const {
  DCHECK_EQ(FormatOf(Opcode()), k32x);
  return Fetch16(1);
}

inline uint4_t Instruction::VRegA_35c(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k35c);
  return InstB(inst_data);  // This is labeled A in the spec.
}

inline uint8_t Instruction::VRegA_3rc(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k3rc);
  return InstAA(inst_data);
}

inline uint8_t Instruction::VRegA_51l(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k51l);
  return InstAA(inst_data);
}

//------------------------------------------------------------------------------
// VRegB
//------------------------------------------------------------------------------
inline int4_t Instruction::VRegB_11n(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k11n);
  return static_cast<int4_t>((InstB(inst_data) << 28) >> 28);
}

inline uint4_t Instruction::VRegB_12x(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k12x);
  return InstB(inst_data);
}

inline uint16_t Instruction::VRegB_21c() const {
  DCHECK_EQ(FormatOf(Opcode()), k21c);
  return Fetch16(1);
}

inline uint16_t Instruction::VRegB_21h() const {
  DCHECK_EQ(FormatOf(Opcode()), k21h);
  return Fetch16(1);
}

inline int16_t Instruction::VRegB_21s() const {
  DCHECK_EQ(FormatOf(Opcode()), k21s);
  return static_cast<int16_t>(Fetch16(1));
}

inline int16_t Instruction::VRegB_21t() const {
  DCHECK_EQ(FormatOf(Opcode()), k21t);
  return static_cast<int16_t>(Fetch16(1));
}

inline uint8_t Instruction::VRegB_22b() const {
  DCHECK_EQ(FormatOf(Opcode()), k22b);
  return static_cast<uint8_t>(Fetch16(1) & 0xff);
}

inline uint4_t Instruction::VRegB_22c(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22c);
  return InstB(inst_data);
}

inline uint4_t Instruction::VRegB_22s(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22s);
  return InstB(inst_data);
}

inline uint4_t Instruction::VRegB_22t(uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k22t);
  return InstB(inst_data);
}

inline uint16_t Instruction::VRegB_22x() const {
  DCHECK_EQ(FormatOf(Opcode()), k22x);
  return Fetch16(1);
}

inline uint8_t Instruction::VRegB_23x() const {
  DCHECK_EQ(FormatOf(Opcode()), k23x);
  return static_cast<uint8_t>(Fetch16(1) & 0xff);
}

inline uint32_t Instruction::VRegB_31c() const {
  DCHECK_EQ(FormatOf(Opcode()), k31c);
  return Fetch32(1);
}

inline int32_t Instruction::VRegB_31i() const {
  DCHECK_EQ(FormatOf(Opcode()), k31i);
  return static_cast<int32_t>(Fetch32(1));
}

inline int32_t Instruction::VRegB_31t() const {
  DCHECK_EQ(FormatOf(Opcode()), k31t);
  return static_cast<int32_t>(Fetch32(1));
}

inline uint16_t Instruction::VRegB_32x() const {
  DCHECK_EQ(FormatOf(Opcode()), k32x);
  return Fetch16(2);
}

inline uint16_t Instruction::VRegB_35c() const {
  DCHECK_EQ(FormatOf(Opcode()), k35c);
  return Fetch16(1);
}

inline uint16_t Instruction::VRegB_3rc() const {
  DCHECK_EQ(FormatOf(Opcode()), k3rc);
  return Fetch16(1);
}

inline uint64_t Instruction::VRegB_51l() const {
  DCHECK_EQ(FormatOf(Opcode()), k51l);
  uint64_t vB_wide = Fetch32(1) | ((uint64_t) Fetch32(3) << 32);
  return vB_wide;
}

//------------------------------------------------------------------------------
// VRegC
//------------------------------------------------------------------------------
inline int8_t Instruction::VRegC_22b() const {
  DCHECK_EQ(FormatOf(Opcode()), k22b);
  return static_cast<int8_t>(Fetch16(1) >> 8);
}

inline uint16_t Instruction::VRegC_22c() const {
  DCHECK_EQ(FormatOf(Opcode()), k22c);
  return Fetch16(1);
}

inline int16_t Instruction::VRegC_22s() const {
  DCHECK_EQ(FormatOf(Opcode()), k22s);
  return static_cast<int16_t>(Fetch16(1));
}

inline int16_t Instruction::VRegC_22t() const {
  DCHECK_EQ(FormatOf(Opcode()), k22t);
  return static_cast<int16_t>(Fetch16(1));
}

inline uint8_t Instruction::VRegC_23x() const {
  DCHECK_EQ(FormatOf(Opcode()), k23x);
  return static_cast<uint8_t>(Fetch16(1) >> 8);
}

inline uint4_t Instruction::VRegC_35c() const {
  DCHECK_EQ(FormatOf(Opcode()), k35c);
  return static_cast<uint4_t>(Fetch16(2) & 0x0f);
}

inline uint16_t Instruction::VRegC_3rc() const {
  DCHECK_EQ(FormatOf(Opcode()), k3rc);
  return Fetch16(2);
}

inline void Instruction::GetArgs(uint32_t arg[5], uint16_t inst_data) const {
  DCHECK_EQ(FormatOf(Opcode()), k35c);

  /*
   * Note that the fields mentioned in the spec don't appear in
   * their "usual" positions here compared to most formats. This
   * was done so that the field names for the argument count and
   * reference index match between this format and the corresponding
   * range formats (3rc and friends).
   *
   * Bottom line: The argument count is always in vA, and the
   * method constant (or equivalent) is always in vB.
   */
  uint16_t regList = Fetch16(2);
  uint4_t count = InstB(inst_data);  // This is labeled A in the spec.
  DCHECK_LE(count, 5U) << "Invalid arg count in 35c (" << count << ")";

  /*
   * Copy the argument registers into the arg[] array, and
   * also copy the first argument (if any) into vC. (The
   * DecodedInstruction structure doesn't have separate
   * fields for {vD, vE, vF, vG}, so there's no need to make
   * copies of those.) Note that cases 5..2 fall through.
   */
  switch (count) {
    case 5: arg[4] = InstA(inst_data);
    case 4: arg[3] = (regList >> 12) & 0x0f;
    case 3: arg[2] = (regList >> 8) & 0x0f;
    case 2: arg[1] = (regList >> 4) & 0x0f;
    case 1: arg[0] = regList & 0x0f; break;
    default:  // case 0
      break;  // Valid, but no need to do anything.
  }
}

}  // namespace art

#endif  // ART_RUNTIME_DEX_INSTRUCTION_INL_H_
