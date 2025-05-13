/* Generated code for Python module 'sklearn$externals$_lobpcg'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_sklearn$externals$_lobpcg" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sklearn$externals$_lobpcg;
PyDictObject *moduledict_sklearn$externals$_lobpcg;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[162];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[162];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("sklearn.externals._lobpcg"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 162; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_sklearn$externals$_lobpcg(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 162; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_LinAlgError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[34]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[34])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[34])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[34]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[34]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[34]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[161]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[161])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[161], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[161])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[161], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[161]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[161]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[161]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__applyConstraints(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[68]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[68])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[68], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[68])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[68], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[68]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[68]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[68]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__as2d(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[95]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[95])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[95])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[95], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[95]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[95]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[95]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__b_orthonormalize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[69]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[69])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[69], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[69])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[69], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[69]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[69]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[69]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__get_indx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[71]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[71])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[71], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[71])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[71], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[71]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[71]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[71]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__makeOperator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[52]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[52])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[52], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[52]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[52]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[52]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$__report_nonhermitian(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[127]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[127])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[127], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[127]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[127]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[127]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_aslinearoperator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[21]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[21])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[21], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[21])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[21], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[21]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[21]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_bmat(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[119]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[119])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[119])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[119], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[119]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[119]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[119]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_cho_factor(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[66]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[66])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[66], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[66])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[66], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[66]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[66]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[66]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_cho_solve(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[25]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[25])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[25], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[25])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[25], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[25]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[25]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[25]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_cholesky(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[31]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[31])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[31], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[31])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[31], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[31]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[31]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[31]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_eigh(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[59]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[59])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[59], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[59])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[59], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[59]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[59]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[59]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_inv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[33]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[33])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[33], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[33])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[33], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[33]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[33]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[33]);
    }

    return result;
}

static PyObject *module_var_accessor_sklearn$externals$_lobpcg_$$_np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_sklearn$externals$_lobpcg->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_sklearn$externals$_lobpcg->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[6]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_sklearn$externals$_lobpcg->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[6])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[6], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[6])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[6], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[6]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[6]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[6]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_544fb7536215a570fe3504730338436d;
static PyCodeObject *code_objects_ac23501a12b11286ad6a040fa57c5fdb;
static PyCodeObject *code_objects_39a288098a3938319a8091525b0dad3e;
static PyCodeObject *code_objects_f72ae8dcc2695a92c28f542c46a599d0;
static PyCodeObject *code_objects_b1dd65a031246cd950afad417ab4bd8c;
static PyCodeObject *code_objects_fe18adb60f8bc220a971083286e97ee3;
static PyCodeObject *code_objects_839b442d4ba86443df5bff33f3b16323;
static PyCodeObject *code_objects_961fb3c53b960eed06eebe60483a57e7;
static PyCodeObject *code_objects_78face74fc000836139a2b7523b34baf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[149]); CHECK_OBJECT(module_filename_obj);
    code_objects_544fb7536215a570fe3504730338436d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    code_objects_ac23501a12b11286ad6a040fa57c5fdb = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[151], NULL, 4, 0, 0);
    code_objects_39a288098a3938319a8091525b0dad3e = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[152], NULL, 1, 0, 0);
    code_objects_f72ae8dcc2695a92c28f542c46a599d0 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[153], NULL, 4, 0, 0);
    code_objects_b1dd65a031246cd950afad417ab4bd8c = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[154], NULL, 3, 0, 0);
    code_objects_fe18adb60f8bc220a971083286e97ee3 = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[118], mod_consts[155], mod_consts[156], 2, 0, 0);
    code_objects_839b442d4ba86443df5bff33f3b16323 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[157], NULL, 2, 0, 0);
    code_objects_961fb3c53b960eed06eebe60483a57e7 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[158], NULL, 2, 0, 0);
    code_objects_78face74fc000836139a2b7523b34baf = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[159], NULL, 11, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__2__as2d(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__3__makeOperator(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__4__applyConstraints(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__6__get_indx(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_M = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *var_norm = NULL;
    PyObject *var_md = NULL;
    PyObject *var_nmd = NULL;
    PyObject *var_tol = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian = MAKE_FUNCTION_FRAME(tstate, code_objects_961fb3c53b960eed06eebe60483a57e7, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian = cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sklearn$externals$_lobpcg;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[2],
                const_int_0
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 36;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_norm == NULL);
        var_norm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_M);
        tmp_sub_expr_left_1 = par_M;
        CHECK_OBJECT(par_M);
        tmp_expression_value_1 = par_M;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 38;
        tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_md == NULL);
        var_md = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_norm);
        tmp_called_value_1 = var_norm;
        CHECK_OBJECT(var_md);
        tmp_args_element_value_1 = var_md;
        tmp_args_element_value_2 = const_int_pos_1;
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nmd == NULL);
        var_nmd = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        tmp_mult_expr_left_1 = mod_consts[5];
        tmp_expression_value_3 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_expression_value_4 = par_M;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 41;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tol == NULL);
        var_tol = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_tol);
        tmp_args_element_value_4 = var_tol;
        CHECK_OBJECT(var_tol);
        tmp_mult_expr_left_2 = var_tol;
        CHECK_OBJECT(var_norm);
        tmp_called_value_4 = var_norm;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_6 = par_M;
        tmp_args_element_value_7 = const_int_pos_1;
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_mult_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 42;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tol;
            assert(old != NULL);
            var_tol = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_nmd);
        tmp_cmp_expr_left_1 = var_nmd;
        CHECK_OBJECT(var_tol);
        tmp_cmp_expr_right_1 = var_tol;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_5 != NULL);
        tmp_mod_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_5;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_M);
            tmp_expression_value_5 = par_M;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 45;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 45;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 44;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 44;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_6 != NULL);
        tmp_mod_expr_left_2 = mod_consts[13];
        CHECK_OBJECT(var_nmd);
        tmp_tuple_element_2 = var_nmd;
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_tol);
        tmp_tuple_element_2 = var_tol;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        tmp_args_element_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame.f_lineno = 46;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian,
        type_description_1,
        par_M,
        par_name,
        var_norm,
        var_md,
        var_nmd,
        var_tol
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian == cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_norm);
    Py_DECREF(var_norm);
    var_norm = NULL;
    CHECK_OBJECT(var_md);
    Py_DECREF(var_md);
    var_md = NULL;
    CHECK_OBJECT(var_nmd);
    Py_DECREF(var_nmd);
    var_nmd = NULL;
    CHECK_OBJECT(var_tol);
    Py_DECREF(var_tol);
    var_tol = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_norm);
    var_norm = NULL;
    Py_XDECREF(var_md);
    var_md = NULL;
    Py_XDECREF(var_nmd);
    var_nmd = NULL;
    Py_XDECREF(var_tol);
    var_tol = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__2__as2d(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_ar = python_pars[0];
    PyObject *var_aux = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d = MAKE_FUNCTION_FRAME(tstate, code_objects_39a288098a3938319a8091525b0dad3e, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d = cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_1 = par_ar;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[16];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_ar);
    tmp_return_value = par_ar;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ar);
        tmp_tuple_element_1 = par_ar;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[18]);
        frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d->m_frame.f_lineno = 57;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_aux == NULL);
        var_aux = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_4 = par_ar;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_0;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_assattr_value_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = const_int_pos_1;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_aux);
        tmp_assattr_target_1 = var_aux;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    CHECK_OBJECT(var_aux);
    tmp_return_value = var_aux;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d,
        type_description_1,
        par_ar,
        var_aux
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d == cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__2__as2d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_aux);
    var_aux = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__3__makeOperator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_operatorInput = python_pars[0];
    PyObject *par_expectedShape = python_pars[1];
    PyObject *var_operator = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator = MAKE_FUNCTION_FRAME(tstate, code_objects_839b442d4ba86443df5bff33f3b16323, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator = cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_operatorInput);
        tmp_cmp_expr_left_1 = par_operatorInput;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = module_var_accessor_sklearn$externals$_lobpcg_$$_aslinearoperator(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[21]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_operatorInput);
        tmp_args_element_value_1 = par_operatorInput;
        frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator->m_frame.f_lineno = 69;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_operator == NULL);
        var_operator = tmp_assign_source_1;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_operator);
        tmp_expression_value_1 = var_operator;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_expectedShape);
        tmp_cmp_expr_right_2 = par_expectedShape;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[22];
        frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator->m_frame.f_lineno = 72;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 72;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator,
        type_description_1,
        par_operatorInput,
        par_expectedShape,
        var_operator
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator == cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__3__makeOperator);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_operator);
    tmp_return_value = var_operator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_operator);
    var_operator = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_operator);
    var_operator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_operatorInput);
    Py_DECREF(par_operatorInput);
    CHECK_OBJECT(par_expectedShape);
    Py_DECREF(par_expectedShape);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_operatorInput);
    Py_DECREF(par_operatorInput);
    CHECK_OBJECT(par_expectedShape);
    Py_DECREF(par_expectedShape);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__4__applyConstraints(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_blockVectorV = python_pars[0];
    PyObject *par_factYBY = python_pars[1];
    PyObject *par_blockVectorBY = python_pars[2];
    PyObject *par_blockVectorY = python_pars[3];
    PyObject *var_YBV = NULL;
    PyObject *var_tmp = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints = MAKE_FUNCTION_FRAME(tstate, code_objects_ac23501a12b11286ad6a040fa57c5fdb, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints = cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorBY);
        tmp_expression_value_2 = par_blockVectorBY;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_frame.f_lineno = 79;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_args_element_value_2 = par_blockVectorV;
        frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_YBV == NULL);
        var_YBV = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = module_var_accessor_sklearn$externals$_lobpcg_$$_cho_solve(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[25]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_factYBY);
        tmp_args_element_value_3 = par_factYBY;
        CHECK_OBJECT(var_YBV);
        tmp_args_element_value_4 = var_YBV;
        frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tmp == NULL);
        var_tmp = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_blockVectorV);
        tmp_isub_expr_left_1 = par_blockVectorV;
        tmp_called_instance_2 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorY);
        tmp_args_element_value_5 = par_blockVectorY;
        CHECK_OBJECT(var_tmp);
        tmp_args_element_value_6 = var_tmp;
        frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_isub_expr_right_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_isub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        Py_DECREF(tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_isub_expr_left_1;
        par_blockVectorV = tmp_assign_source_3;

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints,
        type_description_1,
        par_blockVectorV,
        par_factYBY,
        par_blockVectorBY,
        par_blockVectorY,
        var_YBV,
        var_tmp
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints == cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__4__applyConstraints);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_blockVectorV);
    Py_DECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    CHECK_OBJECT(var_YBV);
    Py_DECREF(var_YBV);
    var_YBV = NULL;
    CHECK_OBJECT(var_tmp);
    Py_DECREF(var_tmp);
    var_tmp = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(par_blockVectorV);
    Py_DECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    Py_XDECREF(var_YBV);
    var_YBV = NULL;
    Py_XDECREF(var_tmp);
    var_tmp = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_factYBY);
    Py_DECREF(par_factYBY);
    CHECK_OBJECT(par_blockVectorBY);
    Py_DECREF(par_blockVectorBY);
    CHECK_OBJECT(par_blockVectorY);
    Py_DECREF(par_blockVectorY);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_factYBY);
    Py_DECREF(par_factYBY);
    CHECK_OBJECT(par_blockVectorBY);
    Py_DECREF(par_blockVectorBY);
    CHECK_OBJECT(par_blockVectorY);
    Py_DECREF(par_blockVectorY);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_B = python_pars[0];
    PyObject *par_blockVectorV = python_pars[1];
    PyObject *par_blockVectorBV = python_pars[2];
    PyObject *par_retInvR = python_pars[3];
    PyObject *var_normalization = NULL;
    PyObject *var_VBV = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize = MAKE_FUNCTION_FRAME(tstate, code_objects_f72ae8dcc2695a92c28f542c46a599d0, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize = cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_blockVectorV);
        tmp_expression_value_1 = par_blockVectorV;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 86;
        tmp_add_expr_left_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[27], 0), mod_consts[28]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorV);
        tmp_expression_value_4 = par_blockVectorV;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 86;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_normalization == NULL);
        var_normalization = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_blockVectorV);
        tmp_truediv_expr_left_1 = par_blockVectorV;
        CHECK_OBJECT(var_normalization);
        tmp_truediv_expr_right_1 = var_normalization;
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorV;
            assert(old != NULL);
            par_blockVectorV = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_blockVectorBV);
        tmp_cmp_expr_left_1 = par_blockVectorBV;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_2 = par_B;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_B);
        tmp_called_value_3 = par_B;
        CHECK_OBJECT(par_blockVectorV);
        tmp_args_element_value_2 = par_blockVectorV;
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 90;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_blockVectorV);
        tmp_assign_source_4 = par_blockVectorV;
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_4;
            Py_INCREF(par_blockVectorBV);
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        CHECK_OBJECT(par_blockVectorBV);
        tmp_truediv_expr_left_2 = par_blockVectorBV;
        CHECK_OBJECT(var_normalization);
        tmp_truediv_expr_right_2 = var_normalization;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_5 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[29]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_blockVectorV == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_blockVectorV;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 95;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_blockVectorBV);
        tmp_args_element_value_4 = par_blockVectorBV;
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_VBV == NULL);
        var_VBV = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_5 = module_var_accessor_sklearn$externals$_lobpcg_$$_cholesky(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[31]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_VBV);
        tmp_tuple_element_1 = var_VBV;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[32]);
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 98;
        tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_VBV;
            assert(old != NULL);
            var_VBV = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_6 = module_var_accessor_sklearn$externals$_lobpcg_$$_inv(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[33]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_VBV);
        tmp_tuple_element_2 = var_VBV;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[32]);
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 99;
        tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_VBV;
            assert(old != NULL);
            var_VBV = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_7 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[29]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_blockVectorV == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[30]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_blockVectorV;
        CHECK_OBJECT(var_VBV);
        tmp_args_element_value_6 = var_VBV;
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_blockVectorV;
            par_blockVectorV = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_3 = par_B;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_2 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_blockVectorBV);
        tmp_args_element_value_7 = par_blockVectorBV;
        CHECK_OBJECT(var_VBV);
        tmp_args_element_value_8 = var_VBV;
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[29],
                call_args
            );
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_11;
            Py_INCREF(par_blockVectorBV);
            Py_DECREF(old);
        }

    }
    branch_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_4 = module_var_accessor_sklearn$externals$_lobpcg_$$_LinAlgError(tstate);
        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        {
            PyObject *old = par_blockVectorV;
            par_blockVectorV = tmp_assign_source_12;
            Py_INCREF(par_blockVectorV);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        {
            PyObject *old = par_blockVectorBV;
            assert(old != NULL);
            par_blockVectorBV = tmp_assign_source_13;
            Py_INCREF(par_blockVectorBV);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        {
            PyObject *old = var_VBV;
            var_VBV = tmp_assign_source_14;
            Py_INCREF(var_VBV);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 96;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame)) {
            frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_retInvR);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_retInvR);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_blockVectorV);
        tmp_tuple_element_3 = par_blockVectorV;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_blockVectorBV);
        tmp_tuple_element_3 = par_blockVectorBV;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        if (var_VBV == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[35]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = var_VBV;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        CHECK_OBJECT(var_normalization);
        tmp_tuple_element_3 = var_normalization;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_blockVectorV);
        tmp_tuple_element_4 = par_blockVectorV;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_blockVectorBV);
        tmp_tuple_element_4 = par_blockVectorBV;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
        goto frame_return_exit_1;
    }
    branch_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize,
        type_description_1,
        par_B,
        par_blockVectorV,
        par_blockVectorBV,
        par_retInvR,
        var_normalization,
        var_VBV
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize == cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_blockVectorV);
    Py_DECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    CHECK_OBJECT(par_blockVectorBV);
    Py_DECREF(par_blockVectorBV);
    par_blockVectorBV = NULL;
    CHECK_OBJECT(var_normalization);
    Py_DECREF(var_normalization);
    var_normalization = NULL;
    Py_XDECREF(var_VBV);
    var_VBV = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_blockVectorV);
    par_blockVectorV = NULL;
    Py_XDECREF(par_blockVectorBV);
    par_blockVectorBV = NULL;
    Py_XDECREF(var_normalization);
    var_normalization = NULL;
    Py_XDECREF(var_VBV);
    var_VBV = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_retInvR);
    Py_DECREF(par_retInvR);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_B);
    Py_DECREF(par_B);
    CHECK_OBJECT(par_retInvR);
    Py_DECREF(par_retInvR);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__6__get_indx(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par__lambda = python_pars[0];
    PyObject *par_num = python_pars[1];
    PyObject *par_largest = python_pars[2];
    PyObject *var_ii = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx = MAKE_FUNCTION_FRAME(tstate, code_objects_b1dd65a031246cd950afad417ab4bd8c, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx = cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par__lambda);
        tmp_args_element_value_1 = par__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx->m_frame.f_lineno = 121;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ii == NULL);
        var_ii = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_step_value_1;
        CHECK_OBJECT(var_ii);
        tmp_expression_value_1 = var_ii;
        tmp_start_value_1 = Py_None;
        CHECK_OBJECT(par_num);
        tmp_operand_value_1 = par_num;
        tmp_sub_expr_left_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = const_int_pos_1;
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_stop_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_step_value_1 = const_int_neg_1;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT3(tstate, tmp_start_value_1, tmp_stop_value_1, tmp_step_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_ii);
        tmp_expression_value_2 = var_ii;
        CHECK_OBJECT(par_num);
        tmp_stop_value_2 = par_num;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx,
        type_description_1,
        par__lambda,
        par_num,
        par_largest,
        var_ii
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx == cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__6__get_indx);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ii);
    tmp_return_value = var_ii;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ii);
    Py_DECREF(var_ii);
    var_ii = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_ii);
    var_ii = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par__lambda);
    Py_DECREF(par__lambda);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par__lambda);
    Py_DECREF(par__lambda);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__7_lobpcg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_X = python_pars[1];
    PyObject *par_B = python_pars[2];
    PyObject *par_M = python_pars[3];
    PyObject *par_Y = python_pars[4];
    PyObject *par_tol = python_pars[5];
    PyObject *par_maxiter = python_pars[6];
    PyObject *par_largest = python_pars[7];
    struct Nuitka_CellObject *par_verbosityLevel = Nuitka_Cell_New1(python_pars[8]);
    PyObject *par_retLambdaHistory = python_pars[9];
    PyObject *par_retResidualNormsHistory = python_pars[10];
    PyObject *var_blockVectorX = NULL;
    PyObject *var_blockVectorY = NULL;
    PyObject *var_residualTolerance = NULL;
    PyObject *var_sizeY = NULL;
    PyObject *var_n = NULL;
    PyObject *var_sizeX = NULL;
    PyObject *var_aux = NULL;
    PyObject *var_eigvals = NULL;
    PyObject *var_A_dense = NULL;
    PyObject *var_B_dense = NULL;
    PyObject *var_vals = NULL;
    PyObject *var_vecs = NULL;
    PyObject *var_blockVectorBY = NULL;
    PyObject *var_gramYBY = NULL;
    PyObject *var_e = NULL;
    PyObject *var_blockVectorBX = NULL;
    PyObject *var_blockVectorAX = NULL;
    PyObject *var_gramXAX = NULL;
    PyObject *var__lambda = NULL;
    PyObject *var_eigBlockVector = NULL;
    PyObject *var_ii = NULL;
    PyObject *var_activeMask = NULL;
    PyObject *var_lambdaHistory = NULL;
    PyObject *var_residualNormsHistory = NULL;
    PyObject *var_previousBlockSize = NULL;
    PyObject *var_ident = NULL;
    PyObject *var_ident0 = NULL;
    PyObject *var_blockVectorP = NULL;
    PyObject *var_blockVectorAP = NULL;
    PyObject *var_blockVectorBP = NULL;
    PyObject *var_iterationNumber = NULL;
    PyObject *var_restart = NULL;
    nuitka_bool var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_blockVectorR = NULL;
    PyObject *var_residualNorms = NULL;
    PyObject *var_currentBlockSize = NULL;
    PyObject *var_activeBlockVectorR = NULL;
    PyObject *var_activeBlockVectorP = NULL;
    PyObject *var_activeBlockVectorAP = NULL;
    PyObject *var_activeBlockVectorBP = NULL;
    PyObject *var_activeBlockVectorBR = NULL;
    PyObject *var_activeBlockVectorAR = NULL;
    PyObject *var_invR = NULL;
    PyObject *var_normal = NULL;
    PyObject *var__ = NULL;
    PyObject *var_myeps = NULL;
    PyObject *var_gramXAR = NULL;
    PyObject *var_gramRAR = NULL;
    PyObject *var_gramXBX = NULL;
    PyObject *var_gramRBR = NULL;
    PyObject *var_gramXBR = NULL;
    PyObject *var__handle_gramA_gramB_verbosity = NULL;
    PyObject *var_gramXAP = NULL;
    PyObject *var_gramRAP = NULL;
    PyObject *var_gramPAP = NULL;
    PyObject *var_gramXBP = NULL;
    PyObject *var_gramRBP = NULL;
    PyObject *var_gramPBP = NULL;
    PyObject *var_gramA = NULL;
    PyObject *var_gramB = NULL;
    PyObject *var_eigBlockVectorX = NULL;
    PyObject *var_eigBlockVectorR = NULL;
    PyObject *var_eigBlockVectorP = NULL;
    PyObject *var_pp = NULL;
    PyObject *var_app = NULL;
    PyObject *var_bpp = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_X);
        tmp_assign_source_1 = par_X;
        assert(var_blockVectorX == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_blockVectorX = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_Y);
        tmp_assign_source_2 = par_Y;
        assert(var_blockVectorY == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_blockVectorY = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_tol);
        tmp_assign_source_3 = par_tol;
        assert(var_residualTolerance == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_residualTolerance = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_maxiter);
        tmp_cmp_expr_left_1 = par_maxiter;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[39];
        {
            PyObject *old = par_maxiter;
            assert(old != NULL);
            par_maxiter = tmp_assign_source_4;
            Py_INCREF(par_maxiter);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg = MAKE_FUNCTION_FRAME(tstate, code_objects_78face74fc000836139a2b7523b34baf, module_sklearn$externals$_lobpcg, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg = cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_2 = var_blockVectorY;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_blockVectorY);
        tmp_expression_value_2 = var_blockVectorY;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = const_int_pos_1;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 302;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sizeY == NULL);
        var_sizeY = tmp_assign_source_5;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_0;
        assert(var_sizeY == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_sizeY = tmp_assign_source_6;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_3 = var_blockVectorX;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 307;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 307;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 2;
        tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[40];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 308;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_type = tmp_raise_type_1;
        exception_lineno = 308;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_4 = var_blockVectorX;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 310;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 310;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_n = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert(var_sizeX == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_sizeX = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_verbosityLevel));
        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_verbosityLevel));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 312;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[41];
        assert(var_aux == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_aux = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_4 = par_B;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_1 = var_aux;
        tmp_iadd_expr_right_1 = mod_consts[42];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_13 = tmp_iadd_expr_left_1;
        var_aux = tmp_assign_source_13;

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_2 = var_aux;
        tmp_iadd_expr_right_2 = mod_consts[43];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        assert(!(tmp_result == false));
        tmp_assign_source_14 = tmp_iadd_expr_left_2;
        var_aux = tmp_assign_source_14;

    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_3 = var_aux;
        tmp_iadd_expr_right_3 = mod_consts[44];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        assert(!(tmp_result == false));
        tmp_assign_source_15 = tmp_iadd_expr_left_3;
        var_aux = tmp_assign_source_15;

    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_M);
        tmp_cmp_expr_left_5 = par_M;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_4 = var_aux;
        tmp_iadd_expr_right_4 = mod_consts[45];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        assert(!(tmp_result == false));
        tmp_assign_source_16 = tmp_iadd_expr_left_4;
        var_aux = tmp_assign_source_16;

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_5 = var_aux;
        tmp_iadd_expr_right_5 = mod_consts[46];
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        assert(!(tmp_result == false));
        tmp_assign_source_17 = tmp_iadd_expr_left_5;
        var_aux = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_6 = var_aux;
        tmp_mod_expr_left_1 = mod_consts[47];
        CHECK_OBJECT(var_n);
        tmp_mod_expr_right_1 = var_n;
        tmp_iadd_expr_right_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_iadd_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 322;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_iadd_expr_left_6;
        var_aux = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_7;
        PyObject *tmp_iadd_expr_right_7;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_7 = var_aux;
        tmp_mod_expr_left_2 = mod_consts[48];
        CHECK_OBJECT(var_sizeX);
        tmp_mod_expr_right_2 = var_sizeX;
        tmp_iadd_expr_right_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_iadd_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 323;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
        Py_DECREF(tmp_iadd_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 323;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_7;
        var_aux = tmp_assign_source_19;

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_6 = var_blockVectorY;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_8;
        PyObject *tmp_iadd_expr_right_8;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_8 = var_aux;
        tmp_iadd_expr_right_8 = mod_consts[49];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 325;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = tmp_iadd_expr_left_8;
        var_aux = tmp_assign_source_20;

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_sizeY);
        tmp_cmp_expr_left_7 = var_sizeY;
        tmp_cmp_expr_right_7 = const_int_pos_1;
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 327;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iadd_expr_left_9;
        PyObject *tmp_iadd_expr_right_9;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_9 = var_aux;
        tmp_mod_expr_left_3 = mod_consts[50];
        CHECK_OBJECT(var_sizeY);
        tmp_mod_expr_right_3 = var_sizeY;
        tmp_iadd_expr_right_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_iadd_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
        Py_DECREF(tmp_iadd_expr_right_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 328;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_iadd_expr_left_9;
        var_aux = tmp_assign_source_21;

    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iadd_expr_left_10;
        PyObject *tmp_iadd_expr_right_10;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        CHECK_OBJECT(var_aux);
        tmp_iadd_expr_left_10 = var_aux;
        tmp_mod_expr_left_4 = mod_consts[51];
        CHECK_OBJECT(var_sizeY);
        tmp_mod_expr_right_4 = var_sizeY;
        tmp_iadd_expr_right_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_iadd_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
        Py_DECREF(tmp_iadd_expr_right_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 330;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = tmp_iadd_expr_left_10;
        var_aux = tmp_assign_source_22;

    }
    branch_end_8:;
    branch_end_7:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_1 = var_aux;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 331;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 331;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = module_var_accessor_sklearn$externals$_lobpcg_$$__makeOperator(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 333;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_A);
        tmp_args_element_value_2 = par_A;
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_1 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 333;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 333;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_3 = module_var_accessor_sklearn$externals$_lobpcg_$$__makeOperator(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 334;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_B);
        tmp_args_element_value_4 = par_B;
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_2 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_2);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 334;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_B;
            assert(old != NULL);
            par_B = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_4 = module_var_accessor_sklearn$externals$_lobpcg_$$__makeOperator(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[52]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 335;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_args_element_value_6 = par_M;
        CHECK_OBJECT(var_n);
        tmp_tuple_element_3 = var_n;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_n);
        tmp_tuple_element_3 = var_n;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_3);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 335;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_M;
            assert(old != NULL);
            par_M = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_n);
        tmp_sub_expr_left_1 = var_n;
        if (var_sizeY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[53]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 337;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_right_1 = var_sizeY;
        tmp_cmp_expr_left_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[54];
        CHECK_OBJECT(var_sizeX);
        tmp_mult_expr_right_1 = var_sizeX;
        tmp_cmp_expr_right_8 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 337;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 337;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[55]);
        assert(tmp_called_value_5 != NULL);
        CHECK_OBJECT(var_sizeX);
        tmp_args_element_value_8 = var_sizeX;
        CHECK_OBJECT(var_n);
        tmp_args_element_value_9 = var_n;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 341;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sizeX;
            assert(old != NULL);
            var_sizeX = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_9 = var_blockVectorY;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[56];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 344;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_state.exception_type = tmp_raise_type_2;
        exception_lineno = 344;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_state);
        type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 348;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_n);
        tmp_sub_expr_left_2 = var_n;
        CHECK_OBJECT(var_sizeX);
        tmp_sub_expr_right_2 = var_sizeX;
        tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 349;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_n);
            tmp_sub_expr_left_3 = var_n;
            tmp_sub_expr_right_3 = const_int_pos_1;
            tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 349;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_27, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_27);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_eigvals == NULL);
        var_eigvals = tmp_assign_source_27;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = const_int_0;
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_sub_expr_left_4;
            PyObject *tmp_sub_expr_right_4;
            PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_sizeX);
            tmp_sub_expr_left_4 = var_sizeX;
            tmp_sub_expr_right_4 = const_int_pos_1;
            tmp_tuple_element_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 351;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_28);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(var_eigvals == NULL);
        var_eigvals = tmp_assign_source_28;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_A);
        tmp_called_value_6 = par_A;
        tmp_expression_value_5 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 353;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[57]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_kw_call_arg_value_0_1 = var_n;
        CHECK_OBJECT(par_A);
        tmp_expression_value_6 = par_A;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 353;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 353;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 353;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 353;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A_dense == NULL);
        var_A_dense = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_10 = par_B;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_30 = Py_None;
        Py_INCREF(tmp_assign_source_30);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_B);
        tmp_called_value_8 = par_B;
        tmp_expression_value_7 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 354;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[57]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_kw_call_arg_value_0_2 = var_n;
        CHECK_OBJECT(par_B);
        tmp_expression_value_8 = par_B;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 354;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 354;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 354;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 354;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_B_dense == NULL);
        var_B_dense = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_10 = module_var_accessor_sklearn$externals$_lobpcg_$$_eigh(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[59]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_A_dense);
        tmp_kw_call_arg_value_0_3 = var_A_dense;
        CHECK_OBJECT(var_B_dense);
        tmp_kw_call_arg_value_1_1 = var_B_dense;
        CHECK_OBJECT(var_eigvals);
        tmp_kw_call_dict_value_0_3 = var_eigvals;
        tmp_kw_call_dict_value_1_1 = Py_False;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 356;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts[60]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 356;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_2__element_1;
        assert(var_vals == NULL);
        Py_INCREF(tmp_assign_source_34);
        var_vals = tmp_assign_source_34;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_2__element_2;
        assert(var_vecs == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_vecs = tmp_assign_source_35;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_largest);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_largest);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 358;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vals);
        tmp_expression_value_9 = var_vals;
        tmp_subscript_value_2 = mod_consts[61];
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 360;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vals;
            assert(old != NULL);
            var_vals = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_vecs);
        tmp_expression_value_10 = var_vecs;
        tmp_subscript_value_3 = mod_consts[62];
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 361;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_vecs;
            assert(old != NULL);
            var_vecs = tmp_assign_source_37;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    {
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(var_vals);
        tmp_tuple_element_6 = var_vals;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_vecs);
        tmp_tuple_element_6 = var_vecs;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_6);
        goto frame_return_exit_1;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_left_11 = var_residualTolerance;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_left_12 = var_residualTolerance;
        tmp_cmp_expr_right_12 = mod_consts[63];
        tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 365;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_14 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 366;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 366;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_mult_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n);
        tmp_mult_expr_right_2 = var_n;
        tmp_assign_source_38 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 366;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualTolerance;
            assert(old != NULL);
            var_residualTolerance = tmp_assign_source_38;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_blockVectorY);
        tmp_cmp_expr_left_13 = var_blockVectorY;
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_15 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_14 = par_B;
        tmp_cmp_expr_right_14 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(par_B);
        tmp_called_value_11 = par_B;
        CHECK_OBJECT(var_blockVectorY);
        tmp_args_element_value_12 = var_blockVectorY;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 372;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_12);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 372;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blockVectorBY == NULL);
        var_blockVectorBY = tmp_assign_source_39;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(var_blockVectorY);
        tmp_assign_source_40 = var_blockVectorY;
        assert(var_blockVectorBY == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_blockVectorBY = tmp_assign_source_40;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_11 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 377;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[24]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorY);
        tmp_expression_value_12 = var_blockVectorY;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[3]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 377;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 377;
        tmp_args_element_value_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[4]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 377;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorBY);
        tmp_args_element_value_14 = var_blockVectorBY;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 377;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 377;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gramYBY == NULL);
        var_gramYBY = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_13 = module_var_accessor_sklearn$externals$_lobpcg_$$_cho_factor(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[66]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 380;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_gramYBY);
        tmp_args_element_value_15 = var_gramYBY;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 380;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 380;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_gramYBY;
            assert(old != NULL);
            var_gramYBY = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
        } else if (exception_keeper_lineno_5 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_15 = module_var_accessor_sklearn$externals$_lobpcg_$$_LinAlgError(tstate);
        if (unlikely(tmp_cmp_expr_right_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 381;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 381;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_43); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_e = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_raise_cause_1;
        tmp_make_exception_arg_3 = mod_consts[67];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 382;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_state.exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 382;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
        type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 378;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame)) {
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_16:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_7 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_7 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_14 = module_var_accessor_sklearn$externals$_lobpcg_$$__applyConstraints(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[68]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 384;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_16 = var_blockVectorX;
        CHECK_OBJECT(var_gramYBY);
        tmp_args_element_value_17 = var_gramYBY;
        CHECK_OBJECT(var_blockVectorBY);
        tmp_args_element_value_18 = var_blockVectorBY;
        CHECK_OBJECT(var_blockVectorY);
        tmp_args_element_value_19 = var_blockVectorY;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_14, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 384;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_14:;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_15 = module_var_accessor_sklearn$externals$_lobpcg_$$__b_orthonormalize(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[69]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_B);
        tmp_args_element_value_20 = par_B;
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_21 = var_blockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_44 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_45 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 388;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_47 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_blockVectorX;
            assert(old != NULL);
            var_blockVectorX = tmp_assign_source_47;
            Py_INCREF(var_blockVectorX);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_48 = tmp_tuple_unpack_3__element_2;
        assert(var_blockVectorBX == NULL);
        Py_INCREF(tmp_assign_source_48);
        var_blockVectorBX = tmp_assign_source_48;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(par_A);
        tmp_called_value_16 = par_A;
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_22 = var_blockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 392;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_22);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 392;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blockVectorAX == NULL);
        var_blockVectorAX = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_24;
        tmp_expression_value_13 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 393;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[24]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_expression_value_14 = var_blockVectorX;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[3]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 393;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 393;
        tmp_args_element_value_23 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[4]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 393;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorAX);
        tmp_args_element_value_24 = var_blockVectorAX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 393;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gramXAX == NULL);
        var_gramXAX = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_18 = module_var_accessor_sklearn$externals$_lobpcg_$$_eigh(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[59]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_gramXAX);
        tmp_tuple_element_7 = var_gramXAX;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_7);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[70]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 395;
        tmp_iter_arg_4 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_51;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 395;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_lineno_10 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_10 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_lineno_11 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_11 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_54 = tmp_tuple_unpack_4__element_1;
        assert(var__lambda == NULL);
        Py_INCREF(tmp_assign_source_54);
        var__lambda = tmp_assign_source_54;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_55 = tmp_tuple_unpack_4__element_2;
        assert(var_eigBlockVector == NULL);
        Py_INCREF(tmp_assign_source_55);
        var_eigBlockVector = tmp_assign_source_55;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_19 = module_var_accessor_sklearn$externals$_lobpcg_$$__get_indx(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 396;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__lambda);
        tmp_args_element_value_25 = var__lambda;
        CHECK_OBJECT(var_sizeX);
        tmp_args_element_value_26 = var_sizeX;
        CHECK_OBJECT(par_largest);
        tmp_args_element_value_27 = par_largest;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 396;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ii == NULL);
        var_ii = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var__lambda);
        tmp_expression_value_15 = var__lambda;
        CHECK_OBJECT(var_ii);
        tmp_subscript_value_4 = var_ii;
        tmp_assign_source_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 397;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__lambda;
            assert(old != NULL);
            var__lambda = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_8;
        tmp_expression_value_16 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 399;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[72]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 399;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_17 = var_eigBlockVector;
        tmp_tuple_element_8 = mod_consts[73];
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_ii);
        tmp_tuple_element_8 = var_ii;
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_8);
        tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 399;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 399;
        tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 399;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVector;
            assert(old != NULL);
            var_eigBlockVector = tmp_assign_source_58;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_instance_4 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 400;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorX);
        tmp_args_element_value_29 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_30 = var_eigBlockVector;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_59 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 400;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            assert(old != NULL);
            var_blockVectorX = tmp_assign_source_59;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_instance_5 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 401;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorAX);
        tmp_args_element_value_31 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_32 = var_eigBlockVector;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 401;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_60 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_5,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 401;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            assert(old != NULL);
            var_blockVectorAX = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        CHECK_OBJECT(par_B);
        tmp_cmp_expr_left_16 = par_B;
        tmp_cmp_expr_right_16 = Py_None;
        tmp_condition_result_18 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_instance_6 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 403;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorBX);
        tmp_args_element_value_33 = var_blockVectorBX;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_34 = var_eigBlockVector;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_61 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_6,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 403;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorBX;
            assert(old != NULL);
            var_blockVectorBX = tmp_assign_source_61;
            Py_DECREF(old);
        }

    }
    branch_no_17:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_18 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 407;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[74]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 407;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizeX);
        tmp_tuple_element_10 = var_sizeX;
        tmp_tuple_element_9 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_tuple_element_9, 0, tmp_tuple_element_10);
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_9);
        tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts[75]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 407;
        tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 407;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_activeMask == NULL);
        var_activeMask = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var__lambda);
        tmp_list_element_1 = var__lambda;
        tmp_assign_source_63 = MAKE_LIST_EMPTY(tstate, 1);
        PyList_SET_ITEM0(tmp_assign_source_63, 0, tmp_list_element_1);
        assert(var_lambdaHistory == NULL);
        var_lambdaHistory = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_residualNormsHistory == NULL);
        var_residualNormsHistory = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(var_sizeX);
        tmp_assign_source_65 = var_sizeX;
        assert(var_previousBlockSize == NULL);
        Py_INCREF(tmp_assign_source_65);
        var_previousBlockSize = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_19 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 413;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[57]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizeX);
        tmp_kw_call_arg_value_0_4 = var_sizeX;
        CHECK_OBJECT(par_A);
        tmp_expression_value_20 = par_A;
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 413;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 413;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_22, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 413;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ident == NULL);
        var_ident = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_21 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 414;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[57]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 414;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sizeX);
        tmp_kw_call_arg_value_0_5 = var_sizeX;
        CHECK_OBJECT(par_A);
        tmp_expression_value_22 = par_A;
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 414;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 414;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_23, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 414;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ident0 == NULL);
        var_ident0 = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = Py_None;
        assert(var_blockVectorP == NULL);
        Py_INCREF(tmp_assign_source_68);
        var_blockVectorP = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = Py_None;
        assert(var_blockVectorAP == NULL);
        Py_INCREF(tmp_assign_source_69);
        var_blockVectorAP = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = Py_None;
        assert(var_blockVectorBP == NULL);
        Py_INCREF(tmp_assign_source_70);
        var_blockVectorBP = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = const_int_neg_1;
        assert(var_iterationNumber == NULL);
        Py_INCREF(tmp_assign_source_71);
        var_iterationNumber = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = Py_True;
        assert(var_restart == NULL);
        Py_INCREF(tmp_assign_source_72);
        var_restart = tmp_assign_source_72;
    }
    {
        nuitka_bool tmp_assign_source_73;
        tmp_assign_source_73 = NUITKA_BOOL_FALSE;
        var_explicitGramFlag = tmp_assign_source_73;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[76]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 426;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_17 = var_iterationNumber;
        CHECK_OBJECT(par_maxiter);
        tmp_cmp_expr_right_17 = par_maxiter;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 426;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 426;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    goto loop_end_1;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iadd_expr_left_11;
        nuitka_digit tmp_iadd_expr_right_11;
        if (var_iterationNumber == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[76]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_11 = var_iterationNumber;
        tmp_iadd_expr_right_11 = 1;
        tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_11, tmp_iadd_expr_right_11);
        assert(!(tmp_result == false));
        tmp_assign_source_74 = tmp_iadd_expr_left_11;
        var_iterationNumber = tmp_assign_source_74;

    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 428;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_18 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_18 = const_int_0;
        tmp_condition_result_20 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        tmp_called_value_24 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_24 != NULL);
        tmp_mod_expr_left_5 = mod_consts[78];
        CHECK_OBJECT(var_iterationNumber);
        tmp_mod_expr_right_5 = var_iterationNumber;
        tmp_args_element_value_35 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 429;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 429;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_19:;
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 431;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_19 = par_B;
        tmp_cmp_expr_right_19 = Py_None;
        tmp_condition_result_21 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_24;
        if (var_blockVectorBX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_3 = var_blockVectorBX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = var__lambda;
        tmp_expression_value_24 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[82]);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_11);
        tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_75 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 432;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_26;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_4 = var_blockVectorX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = var__lambda;
        tmp_expression_value_26 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[82]);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_12);
        tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_76 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 434;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    branch_end_20:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        if (var_blockVectorAX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 436;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_5 = var_blockVectorAX;
        CHECK_OBJECT(var_aux);
        tmp_sub_expr_right_5 = var_aux;
        tmp_assign_source_77 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 436;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorR;
            var_blockVectorR = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_37;
        tmp_expression_value_27 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 438;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[85]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 438;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_called_instance_7 = var_blockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 438;
        tmp_mult_expr_left_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[4]);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 438;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_mult_expr_right_5 = var_blockVectorR;
        tmp_args_element_value_36 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 438;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 438;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 438;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_78;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_38;
        tmp_called_instance_8 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 439;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_38 = var_aux;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 439;
        tmp_assign_source_79 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[64], tmp_args_element_value_38);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 439;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualNorms;
            var_residualNorms = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_1 = var_residualNormsHistory;
        CHECK_OBJECT(var_residualNorms);
        tmp_item_value_1 = var_residualNorms;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        tmp_expression_value_28 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 443;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[87]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 443;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_residualNorms);
        tmp_cmp_expr_left_20 = var_residualNorms;
        CHECK_OBJECT(var_residualTolerance);
        tmp_cmp_expr_right_20 = var_residualTolerance;
        tmp_args_element_value_39 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 443;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = Py_True;
        tmp_args_element_value_41 = Py_False;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 443;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            var_ii = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        if (var_activeMask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[88]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 444;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_bitand_expr_left_1 = var_activeMask;
        CHECK_OBJECT(var_ii);
        tmp_bitand_expr_right_1 = var_ii;
        tmp_assign_source_81 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 444;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeMask;
            var_activeMask = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 445;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_21 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_21 = mod_consts[16];
        tmp_condition_result_22 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 445;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_27 != NULL);
        CHECK_OBJECT(var_activeMask);
        tmp_args_element_value_42 = var_activeMask;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 446;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_42);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 446;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_21:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_activeMask);
        tmp_called_instance_9 = var_activeMask;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 448;
        tmp_assign_source_82 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[85]);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 448;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_currentBlockSize;
            var_currentBlockSize = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_cmp_expr_left_22 = var_currentBlockSize;
        if (var_previousBlockSize == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[89]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 449;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_22 = var_previousBlockSize;
        tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 449;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_assign_source_83 = var_currentBlockSize;
        {
            PyObject *old = var_previousBlockSize;
            var_previousBlockSize = tmp_assign_source_83;
            Py_INCREF(var_previousBlockSize);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_29 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 451;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[57]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_currentBlockSize);
        tmp_kw_call_arg_value_0_6 = var_currentBlockSize;
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 451;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = par_A;
        tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 451;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 451;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_28, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ident;
            var_ident = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_cmp_expr_left_23 = var_currentBlockSize;
        tmp_cmp_expr_right_23 = const_int_0;
        tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 453;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    goto loop_end_1;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 456;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_24 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_24 = const_int_0;
        tmp_condition_result_25 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 456;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_29 != NULL);
        tmp_args_element_value_43 = mod_consts[91];
        CHECK_OBJECT(var_currentBlockSize);
        tmp_args_element_value_44 = var_currentBlockSize;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 457;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 457;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_30 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_30 != NULL);
        tmp_args_element_value_45 = mod_consts[92];
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 458;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_46 = var__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 458;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 458;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_31 != NULL);
        tmp_args_element_value_47 = mod_consts[93];
        CHECK_OBJECT(var_residualNorms);
        tmp_args_element_value_48 = var_residualNorms;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
        }

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 459;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 460;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_25 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_25 = mod_consts[5];
        tmp_condition_result_26 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 460;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_49;
        tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_32 != NULL);
        if (var_eigBlockVector == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[94]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 461;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_49 = var_eigBlockVector;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 461;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_49);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 461;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_25:;
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_13;
        tmp_called_value_33 = module_var_accessor_sklearn$externals$_lobpcg_$$__as2d(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 463;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_expression_value_31 = var_blockVectorR;
        tmp_tuple_element_13 = mod_consts[73];
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_13);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_13 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_13);
        tmp_args_element_value_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 463;
        tmp_assign_source_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            var_activeBlockVectorR = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_26;
        nuitka_digit tmp_cmp_expr_right_26;
        CHECK_OBJECT(var_iterationNumber);
        tmp_cmp_expr_left_26 = var_iterationNumber;
        tmp_cmp_expr_right_26 = 0;
        tmp_condition_result_27 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        if (tmp_condition_result_27 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_14;
        tmp_called_value_34 = module_var_accessor_sklearn$externals$_lobpcg_$$__as2d(tstate);
        if (unlikely(tmp_called_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 466;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[96]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_32 = var_blockVectorP;
        tmp_tuple_element_14 = mod_consts[73];
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_14);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_14 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_14);
        tmp_args_element_value_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 466;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 466;
        tmp_assign_source_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 466;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_35 = module_var_accessor_sklearn$externals$_lobpcg_$$__as2d(tstate);
        if (unlikely(tmp_called_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 467;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[97]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 467;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = var_blockVectorAP;
        tmp_tuple_element_15 = mod_consts[73];
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_15);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_15 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_15);
        tmp_args_element_value_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 467;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            var_activeBlockVectorAP = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 468;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_27 = par_B;
        tmp_cmp_expr_right_27 = Py_None;
        tmp_condition_result_28 = (tmp_cmp_expr_left_27 != tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_16;
        tmp_called_value_36 = module_var_accessor_sklearn$externals$_lobpcg_$$__as2d(tstate);
        if (unlikely(tmp_called_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[95]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 469;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[98]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 469;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_34 = var_blockVectorBP;
        tmp_tuple_element_16 = mod_consts[73];
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_16);
        CHECK_OBJECT(var_activeMask);
        tmp_tuple_element_16 = var_activeMask;
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_16);
        tmp_args_element_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 469;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 469;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 469;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    branch_no_27:;
    branch_no_26:;
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        if (par_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[99]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_28 = par_M;
        tmp_cmp_expr_right_28 = Py_None;
        tmp_condition_result_29 = (tmp_cmp_expr_left_28 != tmp_cmp_expr_right_28) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_54;
        if (par_M == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[99]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 473;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_37 = par_M;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_54 = var_activeBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 473;
        tmp_assign_source_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_54);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 473;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_89;
            Py_DECREF(old);
        }

    }
    branch_no_28:;
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        if (var_blockVectorY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[100]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 477;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_29 = var_blockVectorY;
        tmp_cmp_expr_right_29 = Py_None;
        tmp_condition_result_30 = (tmp_cmp_expr_left_29 != tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_38 = module_var_accessor_sklearn$externals$_lobpcg_$$__applyConstraints(tstate);
        if (unlikely(tmp_called_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[68]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 478;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_55 = var_activeBlockVectorR;
        if (var_gramYBY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[101]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 479;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_56 = var_gramYBY;
        if (var_blockVectorBY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[102]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 479;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_57 = var_blockVectorBY;
        if (var_blockVectorY == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[100]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 479;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_58 = var_blockVectorY;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 478;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_38, call_args);
        }

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 478;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_29:;
    {
        bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 483;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_30 = par_B;
        tmp_cmp_expr_right_30 = Py_None;
        tmp_condition_result_31 = (tmp_cmp_expr_left_30 != tmp_cmp_expr_right_30) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_62;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_sub_expr_left_6 = var_activeBlockVectorR;
        tmp_expression_value_35 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 484;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[29]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 484;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 484;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_59 = var_blockVectorX;
        tmp_expression_value_36 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_39);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[29]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = var_blockVectorBX;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[3]);
        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 485;
        tmp_args_element_value_61 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[4]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_62 = var_activeBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_args_element_value_60 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 485;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_sub_expr_right_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 484;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 484;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_90;
            Py_DECREF(old);
        }

    }
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_args_element_value_66;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_sub_expr_left_7 = var_activeBlockVectorR;
        tmp_expression_value_38 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 488;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[29]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 488;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 488;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_63 = var_blockVectorX;
        tmp_expression_value_39 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_41);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[29]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = var_blockVectorX;
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[3]);
        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 489;
        tmp_args_element_value_65 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[4]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_66 = var_activeBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 489;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_args_element_value_64 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 489;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_sub_expr_right_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_sub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 488;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        Py_DECREF(tmp_sub_expr_right_7);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 488;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_91;
            Py_DECREF(old);
        }

    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_43 = module_var_accessor_sklearn$externals$_lobpcg_$$__b_orthonormalize(tstate);
        if (unlikely(tmp_called_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[69]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 494;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 494;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_67 = par_B;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_68 = var_activeBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 494;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_92;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_5 = var_aux;
        tmp_assign_source_93 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 495;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_94 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 495;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_95 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 495;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 495;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_13 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_13 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_96 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_activeBlockVectorR;
            assert(old != NULL);
            var_activeBlockVectorR = tmp_assign_source_96;
            Py_INCREF(var_activeBlockVectorR);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_97 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_activeBlockVectorBR;
            var_activeBlockVectorBR = tmp_assign_source_97;
            Py_INCREF(var_activeBlockVectorBR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_69;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_44 = par_A;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_69 = var_activeBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 497;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_69);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAR;
            var_activeBlockVectorAR = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_31;
        nuitka_digit tmp_cmp_expr_right_31;
        CHECK_OBJECT(var_iterationNumber);
        tmp_cmp_expr_left_31 = var_iterationNumber;
        tmp_cmp_expr_right_31 = 0;
        tmp_condition_result_32 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        if (tmp_condition_result_32 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 500;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_32 = par_B;
        tmp_cmp_expr_right_32 = Py_None;
        tmp_condition_result_33 = (tmp_cmp_expr_left_32 != tmp_cmp_expr_right_32) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_3;
        tmp_called_value_45 = module_var_accessor_sklearn$externals$_lobpcg_$$__b_orthonormalize(tstate);
        if (unlikely(tmp_called_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[69]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 501;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 501;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_17 = par_B;
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_17);
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 501;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_17 = var_activeBlockVectorP;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_17);
        if (var_activeBlockVectorBP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 502;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_17 = var_activeBlockVectorBP;
        PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_17);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_args_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts[105]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 501;
        tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 501;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_99;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_6 = var_aux;
        tmp_assign_source_100 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__source_iter;
            tmp_tuple_unpack_6__source_iter = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_101 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 0, 4);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_1;
            tmp_tuple_unpack_6__element_1 = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_102 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 1, 4);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_2;
            tmp_tuple_unpack_6__element_2 = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_103 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 2, 4);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_3;
            tmp_tuple_unpack_6__element_3 = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_104 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_14, 3, 4);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        {
            PyObject *old = tmp_tuple_unpack_6__element_4;
            tmp_tuple_unpack_6__element_4 = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_6, 4);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 503;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_16;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_14 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_14 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_105 = tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_105;
            Py_INCREF(var_activeBlockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_106 = tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_106;
            Py_INCREF(var_activeBlockVectorBP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
        tmp_assign_source_107 = tmp_tuple_unpack_6__element_3;
        {
            PyObject *old = var_invR;
            var_invR = tmp_assign_source_107;
            Py_INCREF(var_invR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;

    {
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_4);
        tmp_assign_source_108 = tmp_tuple_unpack_6__element_4;
        {
            PyObject *old = var_normal;
            var_normal = tmp_assign_source_108;
            Py_INCREF(var_normal);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;

    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_4;
        tmp_called_value_46 = module_var_accessor_sklearn$externals$_lobpcg_$$__b_orthonormalize(tstate);
        if (unlikely(tmp_called_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[69]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 505;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 505;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_18 = par_B;
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_18);
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 505;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_18 = var_activeBlockVectorP;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_args_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts[105]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 505;
        tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 505;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_109;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(var_aux);
        tmp_iter_arg_7 = var_aux;
        tmp_assign_source_110 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__source_iter;
            tmp_tuple_unpack_7__source_iter = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_15, 0, 4);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_1;
            tmp_tuple_unpack_7__element_1 = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_112 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_16, 1, 4);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_2;
            tmp_tuple_unpack_7__element_2 = tmp_assign_source_112;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_113 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_17, 2, 4);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_3;
            tmp_tuple_unpack_7__element_3 = tmp_assign_source_113;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_114 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_18, 3, 4);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = tmp_tuple_unpack_7__element_4;
            tmp_tuple_unpack_7__element_4 = tmp_assign_source_114;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_7, 4);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_lineno_16 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_16 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_lineno_17 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_17 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_115 = tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = var_activeBlockVectorP;
            var_activeBlockVectorP = tmp_assign_source_115;
            Py_INCREF(var_activeBlockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_116 = tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_116;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_117;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
        tmp_assign_source_117 = tmp_tuple_unpack_7__element_3;
        {
            PyObject *old = var_invR;
            var_invR = tmp_assign_source_117;
            Py_INCREF(var_invR);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_118;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_4);
        tmp_assign_source_118 = tmp_tuple_unpack_7__element_4;
        {
            PyObject *old = var_normal;
            var_normal = tmp_assign_source_118;
            Py_INCREF(var_normal);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;

    branch_end_32:;
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        CHECK_OBJECT(var_activeBlockVectorP);
        tmp_cmp_expr_left_33 = var_activeBlockVectorP;
        tmp_cmp_expr_right_33 = Py_None;
        tmp_condition_result_34 = (tmp_cmp_expr_left_33 != tmp_cmp_expr_right_33) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        if (var_activeBlockVectorAP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 509;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truediv_expr_left_1 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_normal);
        tmp_truediv_expr_right_1 = var_normal;
        tmp_assign_source_119 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 509;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            var_activeBlockVectorAP = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        tmp_called_instance_12 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 510;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAP);
        tmp_args_element_value_70 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_invR);
        tmp_args_element_value_71 = var_invR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 510;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_120 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_12,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 510;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeBlockVectorAP;
            assert(old != NULL);
            var_activeBlockVectorAP = tmp_assign_source_120;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = Py_False;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_121;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = Py_True;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_122;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    branch_end_33:;
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_expression_value_41 = var_activeBlockVectorAR;
        tmp_cmp_expr_left_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[8]);
        if (tmp_cmp_expr_left_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_34 = mod_consts[107];
        tmp_condition_result_35 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        Py_DECREF(tmp_cmp_expr_left_34);
        if (tmp_condition_result_35 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = const_int_pos_1;
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_123;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    goto branch_end_34;
    branch_no_34:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_42 = var_activeBlockVectorR;
        tmp_cmp_expr_left_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[8]);
        if (tmp_cmp_expr_left_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_35 = mod_consts[107];
        tmp_condition_result_36 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        Py_DECREF(tmp_cmp_expr_left_35);
        if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 521;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[108];
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_124;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[109];
        {
            PyObject *old = var_myeps;
            var_myeps = tmp_assign_source_125;
            Py_INCREF(var_myeps);
            Py_XDECREF(old);
        }

    }
    branch_end_35:;
    branch_end_34:;
    {
        nuitka_bool tmp_condition_result_37;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_residualNorms);
        tmp_called_instance_13 = var_residualNorms;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 526;
        tmp_cmp_expr_left_36 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[10]);
        if (tmp_cmp_expr_left_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_myeps);
        tmp_cmp_expr_right_36 = var_myeps;
        tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        Py_DECREF(tmp_cmp_expr_left_36);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_explicitGramFlag == NUITKA_BOOL_UNASSIGNED) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[110]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 526;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = (var_explicitGramFlag == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 526;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_37 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_37 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        nuitka_bool tmp_assign_source_126;
        tmp_assign_source_126 = NUITKA_BOOL_FALSE;
        var_explicitGramFlag = tmp_assign_source_126;
    }
    goto branch_end_36;
    branch_no_36:;
    {
        nuitka_bool tmp_assign_source_127;
        tmp_assign_source_127 = NUITKA_BOOL_TRUE;
        var_explicitGramFlag = tmp_assign_source_127;
    }
    branch_end_36:;
    {
        bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 533;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_37 = par_B;
        tmp_cmp_expr_right_37 = Py_None;
        tmp_condition_result_38 = (tmp_cmp_expr_left_37 == tmp_cmp_expr_right_37) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_128;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 534;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_128 = var_blockVectorX;
        {
            PyObject *old = var_blockVectorBX;
            var_blockVectorBX = tmp_assign_source_128;
            Py_INCREF(var_blockVectorBX);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_assign_source_129 = var_activeBlockVectorR;
        {
            PyObject *old = var_activeBlockVectorBR;
            assert(old != NULL);
            var_activeBlockVectorBR = tmp_assign_source_129;
            Py_INCREF(var_activeBlockVectorBR);
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_3;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[111]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 536;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_3 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 536;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_130;
        if (var_activeBlockVectorP == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 537;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_130 = var_activeBlockVectorP;
        {
            PyObject *old = var_activeBlockVectorBP;
            var_activeBlockVectorBP = tmp_assign_source_130;
            Py_INCREF(var_activeBlockVectorBP);
            Py_XDECREF(old);
        }

    }
    branch_no_38:;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_args_element_value_73;
        tmp_expression_value_43 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[24]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_47);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = var_blockVectorX;
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[3]);
        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 540;
        tmp_args_element_value_72 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[4]);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_73 = var_activeBlockVectorAR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_47, call_args);
        }

        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 540;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAR;
            var_gramXAR = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_75;
        tmp_expression_value_45 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 541;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[24]);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 541;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_46 = var_activeBlockVectorR;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[3]);
        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 541;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 541;
        tmp_args_element_value_74 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[4]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_args_element_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 541;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_75 = var_activeBlockVectorAR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 541;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAR;
            var_gramRAR = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_40;
        assert(var_explicitGramFlag != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_40 = var_explicitGramFlag == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_value_47;
        CHECK_OBJECT(var_gramRAR);
        tmp_add_expr_left_1 = var_gramRAR;
        CHECK_OBJECT(var_gramRAR);
        tmp_expression_value_47 = var_gramRAR;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[3]);
        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 544;
        tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[4]);
        Py_DECREF(tmp_called_instance_16);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[16];
        tmp_assign_source_133 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 544;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAR;
            assert(old != NULL);
            var_gramRAR = tmp_assign_source_133;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_77;
        tmp_expression_value_48 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[24]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_49);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_49 = var_blockVectorX;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[3]);
        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 545;
        tmp_args_element_value_76 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[4]);
        Py_DECREF(tmp_called_instance_17);
        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_77 = var_blockVectorAX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 545;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
        }

        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 545;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            var_gramXAX = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(var_gramXAX);
        tmp_add_expr_left_2 = var_gramXAX;
        CHECK_OBJECT(var_gramXAX);
        tmp_expression_value_50 = var_gramXAX;
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[3]);
        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 546;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 546;
        tmp_add_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[4]);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 546;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 546;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_3 = mod_consts[16];
        tmp_assign_source_135 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 546;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            assert(old != NULL);
            var_gramXAX = tmp_assign_source_135;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_args_element_value_79;
        tmp_expression_value_51 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[24]);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_52 = var_blockVectorX;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[3]);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 547;
        tmp_args_element_value_78 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[4]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_78);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_79 = var_blockVectorBX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 547;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_50, call_args);
        }

        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 547;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBX;
            var_gramXBX = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_args_element_value_81;
        tmp_expression_value_53 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 548;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[24]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_54 = var_activeBlockVectorR;
        tmp_called_instance_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[3]);
        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 548;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 548;
        tmp_args_element_value_80 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[4]);
        Py_DECREF(tmp_called_instance_20);
        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 548;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_81 = var_activeBlockVectorBR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 548;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRBR;
            var_gramRBR = tmp_assign_source_137;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_args_element_value_83;
        tmp_expression_value_55 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[24]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_52);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_56 = var_blockVectorX;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[3]);
        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 549;
        tmp_args_element_value_82 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[4]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_83 = var_activeBlockVectorBR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
            tmp_assign_source_138 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 549;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBR;
            var_gramXBR = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    goto branch_end_39;
    branch_no_39:;
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_84;
        tmp_expression_value_57 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 551;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[112]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 551;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var__lambda == NULL) {
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 551;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_84 = var__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 551;
        tmp_assign_source_139 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_84);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 551;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAX;
            var_gramXAX = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        if (var_ident0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[113]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 552;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_140 = var_ident0;
        {
            PyObject *old = var_gramXBX;
            var_gramXBX = tmp_assign_source_140;
            Py_INCREF(var_gramXBX);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_141;
        if (var_ident == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[114]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 553;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_141 = var_ident;
        {
            PyObject *old = var_gramRBR;
            var_gramRBR = tmp_assign_source_141;
            Py_INCREF(var_gramRBR);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_58 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[115]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_sizeX == NULL) {
            Py_DECREF(tmp_called_value_54);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_19 = var_sizeX;
        tmp_kw_call_arg_value_0_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_7, 0, tmp_tuple_element_19);
        CHECK_OBJECT(var_currentBlockSize);
        tmp_tuple_element_19 = var_currentBlockSize;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_7, 1, tmp_tuple_element_19);
        if (par_A == NULL) {
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_kw_call_arg_value_0_7);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[90]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_59 = par_A;
        tmp_kw_call_dict_value_0_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_kw_call_arg_value_0_7);

            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 554;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_54, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_kw_call_arg_value_0_7);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 554;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBR;
            var_gramXBR = tmp_assign_source_142;
            Py_XDECREF(old);
        }

    }
    branch_end_39:;
    {
        PyObject *tmp_assign_source_143;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_verbosityLevel;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_143 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(tstate, tmp_closure_1);

        {
            PyObject *old = var__handle_gramA_gramB_verbosity;
            var__handle_gramA_gramB_verbosity = tmp_assign_source_143;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_4;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[111]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 565;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_4 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 565;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_args_element_value_86;
        tmp_expression_value_60 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_60 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[24]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_55);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_61 = var_blockVectorX;
        tmp_called_instance_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[3]);
        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 566;
        tmp_args_element_value_85 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[4]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_86 = var_activeBlockVectorAP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_assign_source_144 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_55, call_args);
        }

        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 566;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXAP;
            var_gramXAP = tmp_assign_source_144;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_element_value_88;
        tmp_expression_value_62 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[24]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_63 = var_activeBlockVectorR;
        tmp_called_instance_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[3]);
        if (tmp_called_instance_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 567;
        tmp_args_element_value_87 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[4]);
        Py_DECREF(tmp_called_instance_23);
        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_87);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_88 = var_activeBlockVectorAP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_assign_source_145 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_56, call_args);
        }

        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 567;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRAP;
            var_gramRAP = tmp_assign_source_145;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_90;
        tmp_expression_value_64 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[24]);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_57);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_65 = var_activeBlockVectorP;
        tmp_called_instance_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[3]);
        if (tmp_called_instance_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 568;
        tmp_args_element_value_89 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[4]);
        Py_DECREF(tmp_called_instance_24);
        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_89);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_90 = var_activeBlockVectorAP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_assign_source_146 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_57, call_args);
        }

        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 568;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPAP;
            var_gramPAP = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_92;
        tmp_expression_value_66 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[24]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_58);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_67 = var_blockVectorX;
        tmp_called_instance_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[3]);
        if (tmp_called_instance_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 569;
        tmp_args_element_value_91 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[4]);
        Py_DECREF(tmp_called_instance_25);
        if (tmp_args_element_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_91);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_92 = var_activeBlockVectorBP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 569;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_assign_source_147 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
        }

        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 569;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramXBP;
            var_gramXBP = tmp_assign_source_147;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_94;
        tmp_expression_value_68 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[24]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_expression_value_69 = var_activeBlockVectorR;
        tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[3]);
        if (tmp_called_instance_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 570;
        tmp_args_element_value_93 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_26, mod_consts[4]);
        Py_DECREF(tmp_called_instance_26);
        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_93);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_94 = var_activeBlockVectorBP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 570;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
            tmp_assign_source_148 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_59, call_args);
        }

        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 570;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramRBP;
            var_gramRBP = tmp_assign_source_148;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_42;
        assert(var_explicitGramFlag != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_42 = var_explicitGramFlag == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(var_gramPAP);
        tmp_add_expr_left_3 = var_gramPAP;
        CHECK_OBJECT(var_gramPAP);
        tmp_expression_value_70 = var_gramPAP;
        tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[3]);
        if (tmp_called_instance_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 572;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 572;
        tmp_add_expr_right_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_27, mod_consts[4]);
        Py_DECREF(tmp_called_instance_27);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 572;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 572;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_4 = mod_consts[16];
        tmp_assign_source_149 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 572;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPAP;
            assert(old != NULL);
            var_gramPAP = tmp_assign_source_149;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_args_element_value_96;
        tmp_expression_value_71 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[24]);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_60);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_72 = var_activeBlockVectorP;
        tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[3]);
        if (tmp_called_instance_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 573;
        tmp_args_element_value_95 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_28, mod_consts[4]);
        Py_DECREF(tmp_called_instance_28);
        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_95);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 574;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_96 = var_activeBlockVectorBP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 573;
        {
            PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_assign_source_150 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 573;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramPBP;
            var_gramPBP = tmp_assign_source_150;
            Py_XDECREF(old);
        }

    }
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_assign_source_151;
        if (var_ident == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[114]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 576;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_151 = var_ident;
        {
            PyObject *old = var_gramPBP;
            var_gramPBP = tmp_assign_source_151;
            Py_INCREF(var_gramPBP);
            Py_XDECREF(old);
        }

    }
    branch_end_41:;
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_list_element_2;
        PyObject *tmp_list_element_3;
        tmp_called_value_61 = module_var_accessor_sklearn$externals$_lobpcg_$$_bmat(tstate);
        if (unlikely(tmp_called_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 578;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXAX);
        tmp_list_element_3 = var_gramXAX;
        tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 3);
        PyList_SET_ITEM0(tmp_list_element_2, 0, tmp_list_element_3);
        CHECK_OBJECT(var_gramXAR);
        tmp_list_element_3 = var_gramXAR;
        PyList_SET_ITEM0(tmp_list_element_2, 1, tmp_list_element_3);
        CHECK_OBJECT(var_gramXAP);
        tmp_list_element_3 = var_gramXAP;
        PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_3);
        tmp_args_element_value_97 = MAKE_LIST_EMPTY(tstate, 3);
        {
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_instance_30;
            PyObject *tmp_expression_value_74;
            PyList_SET_ITEM(tmp_args_element_value_97, 0, tmp_list_element_2);
            CHECK_OBJECT(var_gramXAR);
            tmp_expression_value_73 = var_gramXAR;
            tmp_called_instance_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[3]);
            if (tmp_called_instance_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 579;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 579;
            tmp_list_element_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_29, mod_consts[4]);
            Py_DECREF(tmp_called_instance_29);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 579;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 3);
            PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_4);
            CHECK_OBJECT(var_gramRAR);
            tmp_list_element_4 = var_gramRAR;
            PyList_SET_ITEM0(tmp_list_element_2, 1, tmp_list_element_4);
            CHECK_OBJECT(var_gramRAP);
            tmp_list_element_4 = var_gramRAP;
            PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_4);
            PyList_SET_ITEM(tmp_args_element_value_97, 1, tmp_list_element_2);
            CHECK_OBJECT(var_gramXAP);
            tmp_expression_value_74 = var_gramXAP;
            tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[3]);
            if (tmp_called_instance_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 580;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 580;
            tmp_list_element_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_30, mod_consts[4]);
            Py_DECREF(tmp_called_instance_30);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 580;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = MAKE_LIST_EMPTY(tstate, 3);
            {
                PyObject *tmp_called_instance_31;
                PyObject *tmp_expression_value_75;
                PyList_SET_ITEM(tmp_list_element_2, 0, tmp_list_element_5);
                CHECK_OBJECT(var_gramRAP);
                tmp_expression_value_75 = var_gramRAP;
                tmp_called_instance_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[3]);
                if (tmp_called_instance_31 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 580;
                    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_2;
                }
                frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 580;
                tmp_list_element_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_31, mod_consts[4]);
                Py_DECREF(tmp_called_instance_31);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 580;
                    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_2, 1, tmp_list_element_5);
                CHECK_OBJECT(var_gramPAP);
                tmp_list_element_5 = var_gramPAP;
                PyList_SET_ITEM0(tmp_list_element_2, 2, tmp_list_element_5);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_args_element_value_97, 2, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_97);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 578;
        tmp_assign_source_152 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_97);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 578;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramA;
            var_gramA = tmp_assign_source_152;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_list_element_6;
        PyObject *tmp_list_element_7;
        tmp_called_value_62 = module_var_accessor_sklearn$externals$_lobpcg_$$_bmat(tstate);
        if (unlikely(tmp_called_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 581;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXBX);
        tmp_list_element_7 = var_gramXBX;
        tmp_list_element_6 = MAKE_LIST_EMPTY(tstate, 3);
        PyList_SET_ITEM0(tmp_list_element_6, 0, tmp_list_element_7);
        CHECK_OBJECT(var_gramXBR);
        tmp_list_element_7 = var_gramXBR;
        PyList_SET_ITEM0(tmp_list_element_6, 1, tmp_list_element_7);
        CHECK_OBJECT(var_gramXBP);
        tmp_list_element_7 = var_gramXBP;
        PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_7);
        tmp_args_element_value_98 = MAKE_LIST_EMPTY(tstate, 3);
        {
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_instance_32;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_list_element_9;
            PyObject *tmp_called_instance_33;
            PyObject *tmp_expression_value_77;
            PyList_SET_ITEM(tmp_args_element_value_98, 0, tmp_list_element_6);
            CHECK_OBJECT(var_gramXBR);
            tmp_expression_value_76 = var_gramXBR;
            tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[3]);
            if (tmp_called_instance_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 582;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 582;
            tmp_list_element_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_32, mod_consts[4]);
            Py_DECREF(tmp_called_instance_32);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 582;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            tmp_list_element_6 = MAKE_LIST_EMPTY(tstate, 3);
            PyList_SET_ITEM(tmp_list_element_6, 0, tmp_list_element_8);
            CHECK_OBJECT(var_gramRBR);
            tmp_list_element_8 = var_gramRBR;
            PyList_SET_ITEM0(tmp_list_element_6, 1, tmp_list_element_8);
            CHECK_OBJECT(var_gramRBP);
            tmp_list_element_8 = var_gramRBP;
            PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_8);
            PyList_SET_ITEM(tmp_args_element_value_98, 1, tmp_list_element_6);
            CHECK_OBJECT(var_gramXBP);
            tmp_expression_value_77 = var_gramXBP;
            tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[3]);
            if (tmp_called_instance_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 583;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 583;
            tmp_list_element_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_33, mod_consts[4]);
            Py_DECREF(tmp_called_instance_33);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 583;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_3;
            }
            tmp_list_element_6 = MAKE_LIST_EMPTY(tstate, 3);
            {
                PyObject *tmp_called_instance_34;
                PyObject *tmp_expression_value_78;
                PyList_SET_ITEM(tmp_list_element_6, 0, tmp_list_element_9);
                CHECK_OBJECT(var_gramRBP);
                tmp_expression_value_78 = var_gramRBP;
                tmp_called_instance_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[3]);
                if (tmp_called_instance_34 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 583;
                    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_4;
                }
                frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 583;
                tmp_list_element_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_34, mod_consts[4]);
                Py_DECREF(tmp_called_instance_34);
                if (tmp_list_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 583;
                    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_6, 1, tmp_list_element_9);
                CHECK_OBJECT(var_gramPBP);
                tmp_list_element_9 = var_gramPBP;
                PyList_SET_ITEM0(tmp_list_element_6, 2, tmp_list_element_9);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_3;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_98, 2, tmp_list_element_6);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_args_element_value_98);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 581;
        tmp_assign_source_153 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_98);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 581;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramB;
            var_gramB = tmp_assign_source_153;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_args_element_value_100;
        CHECK_OBJECT(var__handle_gramA_gramB_verbosity);
        tmp_called_value_63 = var__handle_gramA_gramB_verbosity;
        CHECK_OBJECT(var_gramA);
        tmp_args_element_value_99 = var_gramA;
        CHECK_OBJECT(var_gramB);
        tmp_args_element_value_100 = var_gramB;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_63, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 585;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_64;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_kwargs_value_5;
        tmp_called_value_64 = module_var_accessor_sklearn$externals$_lobpcg_$$_eigh(tstate);
        if (unlikely(tmp_called_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[59]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(var_gramA);
        tmp_tuple_element_20 = var_gramA;
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_20);
        CHECK_OBJECT(var_gramB);
        tmp_tuple_element_20 = var_gramB;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_20);
        tmp_kwargs_value_5 = DICT_COPY(tstate, mod_consts[70]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 588;
        tmp_iter_arg_8 = CALL_FUNCTION(tstate, tmp_called_value_64, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_iter_arg_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_assign_source_154 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__source_iter;
            tmp_tuple_unpack_8__source_iter = tmp_assign_source_154;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_155 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_19, 0, 2);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_1;
            tmp_tuple_unpack_8__element_1 = tmp_assign_source_155;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_156 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_20, 1, 2);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_8__element_2;
            tmp_tuple_unpack_8__element_2 = tmp_assign_source_156;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_8, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 588;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_lineno_19 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_19 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_157;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_157 = tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_157;
            Py_INCREF(var__lambda);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_158;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_158 = tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_158;
            Py_INCREF(var_eigBlockVector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_20 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_20 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_20);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20, exception_tb);
        } else if (exception_keeper_lineno_20 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_20);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_20);
    // Tried code:
    {
        bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        tmp_cmp_expr_left_38 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_38 = module_var_accessor_sklearn$externals$_lobpcg_$$_LinAlgError(tstate);
        if (unlikely(tmp_cmp_expr_right_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 590;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 590;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = Py_True;
        {
            PyObject *old = var_restart;
            var_restart = tmp_assign_source_159;
            Py_INCREF(var_restart);
            Py_XDECREF(old);
        }

    }
    goto branch_end_42;
    branch_no_42:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 587;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame)) {
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
    branch_end_42:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_4;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[111]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 594;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(var_restart);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 594;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_44 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_list_element_10;
        PyObject *tmp_list_element_11;
        tmp_called_value_65 = module_var_accessor_sklearn$externals$_lobpcg_$$_bmat(tstate);
        if (unlikely(tmp_called_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 595;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXAX);
        tmp_list_element_11 = var_gramXAX;
        tmp_list_element_10 = MAKE_LIST_EMPTY(tstate, 2);
        PyList_SET_ITEM0(tmp_list_element_10, 0, tmp_list_element_11);
        CHECK_OBJECT(var_gramXAR);
        tmp_list_element_11 = var_gramXAR;
        PyList_SET_ITEM0(tmp_list_element_10, 1, tmp_list_element_11);
        tmp_args_element_value_101 = MAKE_LIST_EMPTY(tstate, 2);
        {
            PyObject *tmp_list_element_12;
            PyObject *tmp_called_instance_35;
            PyObject *tmp_expression_value_79;
            PyList_SET_ITEM(tmp_args_element_value_101, 0, tmp_list_element_10);
            CHECK_OBJECT(var_gramXAR);
            tmp_expression_value_79 = var_gramXAR;
            tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[3]);
            if (tmp_called_instance_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 596;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_5;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 596;
            tmp_list_element_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_35, mod_consts[4]);
            Py_DECREF(tmp_called_instance_35);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 596;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_5;
            }
            tmp_list_element_10 = MAKE_LIST_EMPTY(tstate, 2);
            PyList_SET_ITEM(tmp_list_element_10, 0, tmp_list_element_12);
            CHECK_OBJECT(var_gramRAR);
            tmp_list_element_12 = var_gramRAR;
            PyList_SET_ITEM0(tmp_list_element_10, 1, tmp_list_element_12);
            PyList_SET_ITEM(tmp_args_element_value_101, 1, tmp_list_element_10);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_args_element_value_101);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 595;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_101);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 595;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramA;
            var_gramA = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_list_element_13;
        PyObject *tmp_list_element_14;
        tmp_called_value_66 = module_var_accessor_sklearn$externals$_lobpcg_$$_bmat(tstate);
        if (unlikely(tmp_called_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[119]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 597;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gramXBX);
        tmp_list_element_14 = var_gramXBX;
        tmp_list_element_13 = MAKE_LIST_EMPTY(tstate, 2);
        PyList_SET_ITEM0(tmp_list_element_13, 0, tmp_list_element_14);
        CHECK_OBJECT(var_gramXBR);
        tmp_list_element_14 = var_gramXBR;
        PyList_SET_ITEM0(tmp_list_element_13, 1, tmp_list_element_14);
        tmp_args_element_value_102 = MAKE_LIST_EMPTY(tstate, 2);
        {
            PyObject *tmp_list_element_15;
            PyObject *tmp_called_instance_36;
            PyObject *tmp_expression_value_80;
            PyList_SET_ITEM(tmp_args_element_value_102, 0, tmp_list_element_13);
            CHECK_OBJECT(var_gramXBR);
            tmp_expression_value_80 = var_gramXBR;
            tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[3]);
            if (tmp_called_instance_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 598;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_6;
            }
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 598;
            tmp_list_element_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_36, mod_consts[4]);
            Py_DECREF(tmp_called_instance_36);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 598;
                type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
                goto list_build_exception_6;
            }
            tmp_list_element_13 = MAKE_LIST_EMPTY(tstate, 2);
            PyList_SET_ITEM(tmp_list_element_13, 0, tmp_list_element_15);
            CHECK_OBJECT(var_gramRBR);
            tmp_list_element_15 = var_gramRBR;
            PyList_SET_ITEM0(tmp_list_element_13, 1, tmp_list_element_15);
            PyList_SET_ITEM(tmp_args_element_value_102, 1, tmp_list_element_13);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_args_element_value_102);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 597;
        tmp_assign_source_161 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_102);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 597;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gramB;
            var_gramB = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        CHECK_OBJECT(var__handle_gramA_gramB_verbosity);
        tmp_called_value_67 = var__handle_gramA_gramB_verbosity;
        CHECK_OBJECT(var_gramA);
        tmp_args_element_value_103 = var_gramA;
        CHECK_OBJECT(var_gramB);
        tmp_args_element_value_104 = var_gramB;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 600;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_67, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 600;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_6;
        tmp_called_value_68 = module_var_accessor_sklearn$externals$_lobpcg_$$_eigh(tstate);
        if (unlikely(tmp_called_value_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[59]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_gramA);
        tmp_tuple_element_21 = var_gramA;
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_21);
        CHECK_OBJECT(var_gramB);
        tmp_tuple_element_21 = var_gramB;
        PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_21);
        tmp_kwargs_value_6 = DICT_COPY(tstate, mod_consts[70]);
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 603;
        tmp_iter_arg_9 = CALL_FUNCTION(tstate, tmp_called_value_68, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        tmp_assign_source_162 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__source_iter;
            tmp_tuple_unpack_9__source_iter = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_21, 0, 2);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_1;
            tmp_tuple_unpack_9__element_1 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_164 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_22, 1, 2);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
        {
            PyObject *old = tmp_tuple_unpack_9__element_2;
            tmp_tuple_unpack_9__element_2 = tmp_assign_source_164;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_9, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 603;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_25;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_lineno_22 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_22 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_lineno_23 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_23 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_lineno_24 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_24 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_24);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_24);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_24, exception_tb);
        } else if (exception_keeper_lineno_24 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_keeper_lineno_24);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_24, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_24);
    // Tried code:
    {
        bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        tmp_cmp_expr_left_39 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_39 = module_var_accessor_sklearn$externals$_lobpcg_$$_LinAlgError(tstate);
        if (unlikely(tmp_cmp_expr_right_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
        }

        if (tmp_cmp_expr_right_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 605;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 605;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_165); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_165);
        var_e = tmp_assign_source_165;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_raise_cause_2;
        tmp_make_exception_arg_4 = mod_consts[120];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 606;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_2 = var_e;
        exception_state.exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_cause_2);
        exception_lineno = 606;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
        type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto try_except_handler_27;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_lineno_25 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_25 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    goto branch_end_44;
    branch_no_44:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 602;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame)) {
            frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
    branch_end_44:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_lineno_26 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_26 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_state = exception_keeper_name_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_166 = tmp_tuple_unpack_9__element_1;
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_166;
            Py_INCREF(var__lambda);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_167;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_167 = tmp_tuple_unpack_9__element_2;
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_167;
            Py_INCREF(var_eigBlockVector);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    branch_no_43:;
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_69 = module_var_accessor_sklearn$externals$_lobpcg_$$__get_indx(tstate);
        if (unlikely(tmp_called_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[71]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 608;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_105 = var__lambda;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_106 = var_sizeX;
        if (par_largest == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[121]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 608;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_107 = par_largest;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 608;
        {
            PyObject *call_args[] = {tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107};
            tmp_assign_source_168 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_69, call_args);
        }

        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 608;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ii;
            assert(old != NULL);
            var_ii = tmp_assign_source_168;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 609;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_40 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_40 = mod_consts[5];
        tmp_condition_result_46 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 609;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_108;
        tmp_called_value_70 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_70 != NULL);
        CHECK_OBJECT(var_ii);
        tmp_args_element_value_108 = var_ii;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 610;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_108);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 610;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_109;
        tmp_called_value_71 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_71 != NULL);
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 611;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_109 = var__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 611;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_109);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 611;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_45:;
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_12;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 613;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_81 = var__lambda;
        CHECK_OBJECT(var_ii);
        tmp_subscript_value_12 = var_ii;
        tmp_assign_source_169 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_12);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 613;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__lambda;
            var__lambda = tmp_assign_source_169;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_22;
        if (var_eigBlockVector == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[94]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 614;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_82 = var_eigBlockVector;
        tmp_tuple_element_22 = mod_consts[73];
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_22);
        CHECK_OBJECT(var_ii);
        tmp_tuple_element_22 = var_ii;
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 1, tmp_tuple_element_22);
        tmp_assign_source_170 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 614;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVector;
            var_eigBlockVector = tmp_assign_source_170;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[122]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 616;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_lambdaHistory;
        CHECK_OBJECT(var__lambda);
        tmp_item_value_2 = var__lambda;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 618;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_41 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_41 = mod_consts[5];
        tmp_condition_result_47 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
        if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 618;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        tmp_called_value_72 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_72 != NULL);
        tmp_args_element_value_110 = mod_consts[123];
        CHECK_OBJECT(var__lambda);
        tmp_args_element_value_111 = var__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 619;
        {
            PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_72, call_args);
        }

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 619;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 626;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_42 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_42 = mod_consts[5];
        tmp_condition_result_48 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 626;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_112;
        tmp_called_value_73 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_73 != NULL);
        CHECK_OBJECT(var_eigBlockVector);
        tmp_args_element_value_112 = var_eigBlockVector;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 627;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_112);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 627;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_47:;
    {
        bool tmp_condition_result_49;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 630;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_43 = par_B;
        tmp_cmp_expr_right_43 = Py_None;
        tmp_condition_result_49 = (tmp_cmp_expr_left_43 != tmp_cmp_expr_right_43) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        bool tmp_condition_result_50;
        PyObject *tmp_operand_value_5;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[111]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 631;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_5 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 631;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_50 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_83 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 632;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_1 = var_sizeX;
        tmp_subscript_value_14 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
        assert(!(tmp_subscript_value_14 == NULL));
        tmp_assign_source_171 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 632;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_171;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_84 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 633;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_1 = var_sizeX;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 633;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_4 = var_sizeX;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_add_expr_right_4 = var_currentBlockSize;
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_stop_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 633;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_15 == NULL));
        tmp_assign_source_172 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 633;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_172;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_start_value_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_stop_value_3;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_85 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 634;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_5 = var_sizeX;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_add_expr_right_5 = var_currentBlockSize;
        tmp_start_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_start_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 634;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_16 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
        Py_DECREF(tmp_start_value_2);
        assert(!(tmp_subscript_value_16 == NULL));
        tmp_assign_source_173 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 634;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorP;
            var_eigBlockVectorP = tmp_assign_source_173;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        tmp_called_instance_37 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 636;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_113 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_114 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 636;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_assign_source_174 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_37,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 636;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_174;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_iadd_expr_left_12;
        PyObject *tmp_iadd_expr_right_12;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        CHECK_OBJECT(var_pp);
        tmp_iadd_expr_left_12 = var_pp;
        tmp_expression_value_86 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 637;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[24]);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 637;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_74);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 637;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_115 = var_activeBlockVectorP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_116 = var_eigBlockVectorP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 637;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_iadd_expr_right_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
        }

        Py_DECREF(tmp_called_value_74);
        if (tmp_iadd_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 637;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_12, tmp_iadd_expr_right_12);
        Py_DECREF(tmp_iadd_expr_right_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 637;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = tmp_iadd_expr_left_12;
        var_pp = tmp_assign_source_175;

    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        tmp_called_instance_38 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 639;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_117 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_118 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 639;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
            tmp_assign_source_176 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_38,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 639;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_176;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_iadd_expr_left_13;
        PyObject *tmp_iadd_expr_right_13;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        CHECK_OBJECT(var_app);
        tmp_iadd_expr_left_13 = var_app;
        tmp_expression_value_87 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_87 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 640;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[24]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 640;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_75);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 640;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_119 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_120 = var_eigBlockVectorP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 640;
        {
            PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_iadd_expr_right_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_75, call_args);
        }

        Py_DECREF(tmp_called_value_75);
        if (tmp_iadd_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 640;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_13, tmp_iadd_expr_right_13);
        Py_DECREF(tmp_iadd_expr_right_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 640;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_177 = tmp_iadd_expr_left_13;
        var_app = tmp_assign_source_177;

    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        tmp_called_instance_39 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 642;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_121 = var_activeBlockVectorBR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_122 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 642;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_assign_source_178 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_39,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 642;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bpp;
            var_bpp = tmp_assign_source_178;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_iadd_expr_left_14;
        PyObject *tmp_iadd_expr_right_14;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        CHECK_OBJECT(var_bpp);
        tmp_iadd_expr_left_14 = var_bpp;
        tmp_expression_value_88 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_88 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_88 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 643;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[24]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 643;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorBP == NULL) {
            Py_DECREF(tmp_called_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[104]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 643;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_123 = var_activeBlockVectorBP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_124 = var_eigBlockVectorP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 643;
        {
            PyObject *call_args[] = {tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_iadd_expr_right_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_called_value_76);
        if (tmp_iadd_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 643;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_14, tmp_iadd_expr_right_14);
        Py_DECREF(tmp_iadd_expr_right_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 643;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_179 = tmp_iadd_expr_left_14;
        var_bpp = tmp_assign_source_179;

    }
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_stop_value_4;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_89 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 645;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_4 = var_sizeX;
        tmp_subscript_value_17 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_4);
        assert(!(tmp_subscript_value_17 == NULL));
        tmp_assign_source_180 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 645;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_180;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_5;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_90 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 646;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_3 = var_sizeX;
        tmp_stop_value_5 = Py_None;
        tmp_subscript_value_18 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_5);
        assert(!(tmp_subscript_value_18 == NULL));
        tmp_assign_source_181 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 646;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_181;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        tmp_called_instance_40 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 648;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_125 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_126 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 648;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_assign_source_182 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_40,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 648;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_182;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        tmp_called_instance_41 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 649;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_127 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_128 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 649;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assign_source_183 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_41,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 649;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_183;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        tmp_called_instance_42 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 650;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorBR);
        tmp_args_element_value_129 = var_activeBlockVectorBR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_130 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 650;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_assign_source_184 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_42,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 650;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_bpp;
            var_bpp = tmp_assign_source_184;
            Py_XDECREF(old);
        }

    }
    branch_end_49:;
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 652;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_44 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_44 = mod_consts[5];
        tmp_condition_result_51 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 652;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_131;
        tmp_called_value_77 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_77 != NULL);
        CHECK_OBJECT(var_pp);
        tmp_args_element_value_131 = var_pp;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 653;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_131);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 653;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_132;
        tmp_called_value_78 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_78 != NULL);
        CHECK_OBJECT(var_app);
        tmp_args_element_value_132 = var_app;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 654;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_132);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 654;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_133;
        tmp_called_value_79 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_79 != NULL);
        CHECK_OBJECT(var_bpp);
        tmp_args_element_value_133 = var_bpp;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 655;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_133);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 655;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_50:;
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        tmp_expression_value_91 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_91 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 657;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[24]);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 657;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_80);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 657;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_134 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_135 = var_eigBlockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 657;
        {
            PyObject *call_args[] = {tmp_args_element_value_134, tmp_args_element_value_135};
            tmp_add_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 657;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pp);
        tmp_add_expr_right_6 = var_pp;
        tmp_assign_source_185 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 657;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            var_blockVectorX = tmp_assign_source_185;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        tmp_expression_value_92 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_92 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 658;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[24]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 658;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_81);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 658;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_136 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_137 = var_eigBlockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 658;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137};
            tmp_add_expr_left_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_81, call_args);
        }

        Py_DECREF(tmp_called_value_81);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 658;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_add_expr_right_7 = var_app;
        tmp_assign_source_186 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 658;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            var_blockVectorAX = tmp_assign_source_186;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_args_element_value_139;
        tmp_expression_value_93 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_93 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 659;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[24]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 659;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorBX == NULL) {
            Py_DECREF(tmp_called_value_82);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 659;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_138 = var_blockVectorBX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_139 = var_eigBlockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 659;
        {
            PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139};
            tmp_add_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_called_value_82);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 659;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bpp);
        tmp_add_expr_right_8 = var_bpp;
        tmp_assign_source_187 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 659;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorBX;
            var_blockVectorBX = tmp_assign_source_187;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_tuple_element_23;
        CHECK_OBJECT(var_pp);
        tmp_tuple_element_23 = var_pp;
        tmp_iter_arg_10 = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 0, tmp_tuple_element_23);
        CHECK_OBJECT(var_app);
        tmp_tuple_element_23 = var_app;
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 1, tmp_tuple_element_23);
        CHECK_OBJECT(var_bpp);
        tmp_tuple_element_23 = var_bpp;
        PyTuple_SET_ITEM0(tmp_iter_arg_10, 2, tmp_tuple_element_23);
        tmp_assign_source_188 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        assert(!(tmp_assign_source_188 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_10__source_iter;
            tmp_tuple_unpack_10__source_iter = tmp_assign_source_188;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_189 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_23, 0, 3);
        if (tmp_assign_source_189 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 661;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_1;
            tmp_tuple_unpack_10__element_1 = tmp_assign_source_189;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_24 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_190 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_24, 1, 3);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 661;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_2;
            tmp_tuple_unpack_10__element_2 = tmp_assign_source_190;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_25 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_191 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_25, 2, 3);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 661;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_10__element_3;
            tmp_tuple_unpack_10__element_3 = tmp_assign_source_191;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_10, 3);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 661;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_lineno_27 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_27 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_28;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_lineno_28 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_28 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_192;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_192 = tmp_tuple_unpack_10__element_1;
        {
            PyObject *old = var_blockVectorP;
            var_blockVectorP = tmp_assign_source_192;
            Py_INCREF(var_blockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_193;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_193 = tmp_tuple_unpack_10__element_2;
        {
            PyObject *old = var_blockVectorAP;
            var_blockVectorAP = tmp_assign_source_193;
            Py_INCREF(var_blockVectorAP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_194;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_3);
        tmp_assign_source_194 = tmp_tuple_unpack_10__element_3;
        {
            PyObject *old = var_blockVectorBP;
            var_blockVectorBP = tmp_assign_source_194;
            Py_INCREF(var_blockVectorBP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;

    goto branch_end_48;
    branch_no_48:;
    {
        bool tmp_condition_result_52;
        PyObject *tmp_operand_value_6;
        if (var_restart == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[111]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 664;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_6 = var_restart;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 664;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_52 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_stop_value_6;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_94 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 665;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_6 = var_sizeX;
        tmp_subscript_value_19 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_6);
        assert(!(tmp_subscript_value_19 == NULL));
        tmp_assign_source_195 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 665;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_195;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_start_value_4;
        PyObject *tmp_stop_value_7;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_95 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 666;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_4 = var_sizeX;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 666;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_9 = var_sizeX;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_add_expr_right_9 = var_currentBlockSize;
        tmp_stop_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_stop_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 666;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_7);
        Py_DECREF(tmp_stop_value_7);
        assert(!(tmp_subscript_value_20 == NULL));
        tmp_assign_source_196 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 666;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_196;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_start_value_5;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_stop_value_8;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_96 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 667;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_left_10 = var_sizeX;
        CHECK_OBJECT(var_currentBlockSize);
        tmp_add_expr_right_10 = var_currentBlockSize;
        tmp_start_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_start_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 667;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_8 = Py_None;
        tmp_subscript_value_21 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_8);
        Py_DECREF(tmp_start_value_5);
        assert(!(tmp_subscript_value_21 == NULL));
        tmp_assign_source_197 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_96, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 667;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorP;
            var_eigBlockVectorP = tmp_assign_source_197;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_instance_43;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        tmp_called_instance_43 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 669;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_140 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_141 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 669;
        {
            PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141};
            tmp_assign_source_198 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_43,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 669;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_198;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_iadd_expr_left_15;
        PyObject *tmp_iadd_expr_right_15;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        CHECK_OBJECT(var_pp);
        tmp_iadd_expr_left_15 = var_pp;
        tmp_expression_value_97 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_97 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 670;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[24]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 670;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorP == NULL) {
            Py_DECREF(tmp_called_value_83);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[103]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 670;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_142 = var_activeBlockVectorP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_143 = var_eigBlockVectorP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143};
            tmp_iadd_expr_right_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_83, call_args);
        }

        Py_DECREF(tmp_called_value_83);
        if (tmp_iadd_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 670;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_15, tmp_iadd_expr_right_15);
        Py_DECREF(tmp_iadd_expr_right_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 670;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_199 = tmp_iadd_expr_left_15;
        var_pp = tmp_assign_source_199;

    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_args_element_value_145;
        tmp_called_instance_44 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 672;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_144 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_145 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 672;
        {
            PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145};
            tmp_assign_source_200 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_44,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 672;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_200;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_iadd_expr_left_16;
        PyObject *tmp_iadd_expr_right_16;
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        CHECK_OBJECT(var_app);
        tmp_iadd_expr_left_16 = var_app;
        tmp_expression_value_98 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_98 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 673;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[24]);
        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 673;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_activeBlockVectorAP == NULL) {
            Py_DECREF(tmp_called_value_84);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[106]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 673;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_146 = var_activeBlockVectorAP;
        CHECK_OBJECT(var_eigBlockVectorP);
        tmp_args_element_value_147 = var_eigBlockVectorP;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 673;
        {
            PyObject *call_args[] = {tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_iadd_expr_right_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_84, call_args);
        }

        Py_DECREF(tmp_called_value_84);
        if (tmp_iadd_expr_right_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 673;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_16, tmp_iadd_expr_right_16);
        Py_DECREF(tmp_iadd_expr_right_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 673;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_201 = tmp_iadd_expr_left_16;
        var_app = tmp_assign_source_201;

    }
    goto branch_end_51;
    branch_no_51:;
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_stop_value_9;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_99 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 675;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_stop_value_9 = var_sizeX;
        tmp_subscript_value_22 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_9);
        assert(!(tmp_subscript_value_22 == NULL));
        tmp_assign_source_202 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_99, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 675;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorX;
            var_eigBlockVectorX = tmp_assign_source_202;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_start_value_6;
        PyObject *tmp_stop_value_10;
        CHECK_OBJECT(var_eigBlockVector);
        tmp_expression_value_100 = var_eigBlockVector;
        if (var_sizeX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[116]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 676;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_6 = var_sizeX;
        tmp_stop_value_10 = Py_None;
        tmp_subscript_value_23 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_6, tmp_stop_value_10);
        assert(!(tmp_subscript_value_23 == NULL));
        tmp_assign_source_203 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_100, tmp_subscript_value_23);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 676;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_eigBlockVectorR;
            var_eigBlockVectorR = tmp_assign_source_203;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        tmp_called_instance_45 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 678;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorR);
        tmp_args_element_value_148 = var_activeBlockVectorR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_149 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 678;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
            tmp_assign_source_204 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_45,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 678;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pp;
            var_pp = tmp_assign_source_204;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_args_element_value_151;
        tmp_called_instance_46 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 679;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activeBlockVectorAR);
        tmp_args_element_value_150 = var_activeBlockVectorAR;
        CHECK_OBJECT(var_eigBlockVectorR);
        tmp_args_element_value_151 = var_eigBlockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 679;
        {
            PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
            tmp_assign_source_205 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_46,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 679;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_app;
            var_app = tmp_assign_source_205;
            Py_XDECREF(old);
        }

    }
    branch_end_51:;
    {
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 681;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_45 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_45 = mod_consts[5];
        tmp_condition_result_53 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_45, tmp_cmp_expr_right_45);
        if (tmp_condition_result_53 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 681;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_152;
        tmp_called_value_85 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_85 != NULL);
        CHECK_OBJECT(var_pp);
        tmp_args_element_value_152 = var_pp;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 682;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_152);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 682;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_153;
        tmp_called_value_86 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_86 != NULL);
        CHECK_OBJECT(var_app);
        tmp_args_element_value_153 = var_app;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 683;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_153);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 683;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    branch_no_52:;
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        tmp_expression_value_101 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_101 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 685;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[24]);
        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 685;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorX == NULL) {
            Py_DECREF(tmp_called_value_87);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 685;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_154 = var_blockVectorX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_155 = var_eigBlockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 685;
        {
            PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_add_expr_left_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_87, call_args);
        }

        Py_DECREF(tmp_called_value_87);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 685;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pp);
        tmp_add_expr_right_11 = var_pp;
        tmp_assign_source_206 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 685;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorX;
            var_blockVectorX = tmp_assign_source_206;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        tmp_expression_value_102 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_102 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 686;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[24]);
        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 686;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_blockVectorAX == NULL) {
            Py_DECREF(tmp_called_value_88);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 686;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_156 = var_blockVectorAX;
        CHECK_OBJECT(var_eigBlockVectorX);
        tmp_args_element_value_157 = var_eigBlockVectorX;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 686;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157};
            tmp_add_expr_left_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_called_value_88);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 686;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_app);
        tmp_add_expr_right_12 = var_app;
        tmp_assign_source_207 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 686;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorAX;
            var_blockVectorAX = tmp_assign_source_207;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_tuple_element_24;
        CHECK_OBJECT(var_pp);
        tmp_tuple_element_24 = var_pp;
        tmp_iter_arg_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 0, tmp_tuple_element_24);
        CHECK_OBJECT(var_app);
        tmp_tuple_element_24 = var_app;
        PyTuple_SET_ITEM0(tmp_iter_arg_11, 1, tmp_tuple_element_24);
        tmp_assign_source_208 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        assert(!(tmp_assign_source_208 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_11__source_iter;
            tmp_tuple_unpack_11__source_iter = tmp_assign_source_208;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_26 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_209 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_26, 0, 2);
        if (tmp_assign_source_209 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 688;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_1;
            tmp_tuple_unpack_11__element_1 = tmp_assign_source_209;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_27 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_210 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_27, 1, 2);
        if (tmp_assign_source_210 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 688;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
        {
            PyObject *old = tmp_tuple_unpack_11__element_2;
            tmp_tuple_unpack_11__element_2 = tmp_assign_source_210;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_11, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 688;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto try_except_handler_31;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_lineno_29 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_29 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_30;
    // End of try:
    try_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_lineno_30 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_30 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_211;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_211 = tmp_tuple_unpack_11__element_1;
        {
            PyObject *old = var_blockVectorP;
            var_blockVectorP = tmp_assign_source_211;
            Py_INCREF(var_blockVectorP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_212;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_212 = tmp_tuple_unpack_11__element_2;
        {
            PyObject *old = var_blockVectorAP;
            var_blockVectorAP = tmp_assign_source_212;
            Py_INCREF(var_blockVectorAP);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    branch_end_48:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 426;
        type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        if (par_B == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[79]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 690;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_46 = par_B;
        tmp_cmp_expr_right_46 = Py_None;
        tmp_condition_result_54 = (tmp_cmp_expr_left_46 != tmp_cmp_expr_right_46) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_expression_value_104;
        if (var_blockVectorBX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[80]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_6 = var_blockVectorBX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_103 = var__lambda;
        tmp_expression_value_104 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_104 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[82]);
        if (tmp_tuple_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_25);
        tmp_tuple_element_25 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_subscript_value_24, 1, tmp_tuple_element_25);
        tmp_mult_expr_right_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_103, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_213 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 691;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_213;
            Py_XDECREF(old);
        }

    }
    goto branch_end_53;
    branch_no_53:;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_106;
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mult_expr_left_7 = var_blockVectorX;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_105 = var__lambda;
        tmp_expression_value_106 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_106 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[82]);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_26);
        tmp_tuple_element_26 = mod_consts[73];
        PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_26);
        tmp_mult_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_214 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 694;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            var_aux = tmp_assign_source_214;
            Py_XDECREF(old);
        }

    }
    branch_end_53:;
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        if (var_blockVectorAX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[84]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 696;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_sub_expr_left_8 = var_blockVectorAX;
        CHECK_OBJECT(var_aux);
        tmp_sub_expr_right_8 = var_aux;
        tmp_assign_source_215 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 696;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_blockVectorR;
            var_blockVectorR = tmp_assign_source_215;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_args_element_value_159;
        tmp_expression_value_107 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_expression_value_107 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 698;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[85]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 698;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_called_instance_47 = var_blockVectorR;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 698;
        tmp_mult_expr_left_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_47, mod_consts[4]);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 698;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_blockVectorR);
        tmp_mult_expr_right_8 = var_blockVectorR;
        tmp_args_element_value_158 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_args_element_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 698;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 698;
        {
            PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159};
            tmp_assign_source_216 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_89, call_args);
        }

        Py_DECREF(tmp_called_value_89);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 698;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_aux;
            assert(old != NULL);
            var_aux = tmp_assign_source_216;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_args_element_value_160;
        tmp_called_instance_48 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 699;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_aux);
        tmp_args_element_value_160 = var_aux;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 699;
        tmp_assign_source_217 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_48, mod_consts[64], tmp_args_element_value_160);
        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 699;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_residualNorms;
            var_residualNorms = tmp_assign_source_217;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        if (Nuitka_Cell_GET(par_verbosityLevel) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 706;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_47 = Nuitka_Cell_GET(par_verbosityLevel);
        tmp_cmp_expr_right_47 = const_int_0;
        tmp_condition_result_55 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
        if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 706;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        tmp_called_value_90 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_90 != NULL);
        tmp_args_element_value_161 = mod_consts[124];
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 707;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_162 = var__lambda;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 707;
        {
            PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_90, call_args);
        }

        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 707;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        tmp_called_value_91 = LOOKUP_BUILTIN(mod_consts[11]);
        assert(tmp_called_value_91 != NULL);
        tmp_args_element_value_163 = mod_consts[125];
        CHECK_OBJECT(var_residualNorms);
        tmp_args_element_value_164 = var_residualNorms;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame.f_lineno = 708;
        {
            PyObject *call_args[] = {tmp_args_element_value_163, tmp_args_element_value_164};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_91, call_args);
        }

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 708;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    branch_no_54:;
    {
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_retLambdaHistory);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_retLambdaHistory);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 710;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_56 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        nuitka_bool tmp_condition_result_57;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_retResidualNormsHistory);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_retResidualNormsHistory);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 711;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_57 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_tuple_element_27;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 712;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_27 = var__lambda;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_27);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 712;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_27 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_27);
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[122]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 712;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_27 = var_lambdaHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_27);
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 712;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_27 = var_residualNormsHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_27);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        goto frame_return_exit_1;
    }
    goto branch_end_56;
    branch_no_56:;
    {
        PyObject *tmp_tuple_element_28;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 714;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_28 = var__lambda;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_28);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 714;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_28 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_28);
        if (var_lambdaHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[122]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 714;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_28 = var_lambdaHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_28);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        goto frame_return_exit_1;
    }
    branch_end_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        nuitka_bool tmp_condition_result_58;
        int tmp_truth_name_7;
        CHECK_OBJECT(par_retResidualNormsHistory);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_retResidualNormsHistory);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 716;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_58 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_tuple_element_29;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 717;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_29 = var__lambda;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_29);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 717;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_29 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_29);
        if (var_residualNormsHistory == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[86]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 717;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_29 = var_residualNormsHistory;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_29);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        goto frame_return_exit_1;
    }
    goto branch_end_57;
    branch_no_57:;
    {
        PyObject *tmp_tuple_element_30;
        if (var__lambda == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[81]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 719;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_30 = var__lambda;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_30);
        if (var_blockVectorX == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[83]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 719;
            type_description_1 = "oooooooocoooooooooooooooooooooooooooooooooobooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_30 = var_blockVectorX;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_30);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        goto frame_return_exit_1;
    }
    branch_end_57:;
    branch_end_55:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg,
        type_description_1,
        par_A,
        par_X,
        par_B,
        par_M,
        par_Y,
        par_tol,
        par_maxiter,
        par_largest,
        par_verbosityLevel,
        par_retLambdaHistory,
        par_retResidualNormsHistory,
        var_blockVectorX,
        var_blockVectorY,
        var_residualTolerance,
        var_sizeY,
        var_n,
        var_sizeX,
        var_aux,
        var_eigvals,
        var_A_dense,
        var_B_dense,
        var_vals,
        var_vecs,
        var_blockVectorBY,
        var_gramYBY,
        var_e,
        var_blockVectorBX,
        var_blockVectorAX,
        var_gramXAX,
        var__lambda,
        var_eigBlockVector,
        var_ii,
        var_activeMask,
        var_lambdaHistory,
        var_residualNormsHistory,
        var_previousBlockSize,
        var_ident,
        var_ident0,
        var_blockVectorP,
        var_blockVectorAP,
        var_blockVectorBP,
        var_iterationNumber,
        var_restart,
        (int)var_explicitGramFlag,
        var_blockVectorR,
        var_residualNorms,
        var_currentBlockSize,
        var_activeBlockVectorR,
        var_activeBlockVectorP,
        var_activeBlockVectorAP,
        var_activeBlockVectorBP,
        var_activeBlockVectorBR,
        var_activeBlockVectorAR,
        var_invR,
        var_normal,
        var__,
        var_myeps,
        var_gramXAR,
        var_gramRAR,
        var_gramXBX,
        var_gramRBR,
        var_gramXBR,
        var__handle_gramA_gramB_verbosity,
        var_gramXAP,
        var_gramRAP,
        var_gramPAP,
        var_gramXBP,
        var_gramRBP,
        var_gramPBP,
        var_gramA,
        var_gramB,
        var_eigBlockVectorX,
        var_eigBlockVectorR,
        var_eigBlockVectorP,
        var_pp,
        var_app,
        var_bpp
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg == cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_M);
    par_M = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    Py_XDECREF(var_blockVectorX);
    var_blockVectorX = NULL;
    Py_XDECREF(var_blockVectorY);
    var_blockVectorY = NULL;
    CHECK_OBJECT(var_residualTolerance);
    Py_DECREF(var_residualTolerance);
    var_residualTolerance = NULL;
    Py_XDECREF(var_sizeY);
    var_sizeY = NULL;
    CHECK_OBJECT(var_n);
    Py_DECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_sizeX);
    var_sizeX = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    Py_XDECREF(var_eigvals);
    var_eigvals = NULL;
    Py_XDECREF(var_A_dense);
    var_A_dense = NULL;
    Py_XDECREF(var_B_dense);
    var_B_dense = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    Py_XDECREF(var_vecs);
    var_vecs = NULL;
    Py_XDECREF(var_blockVectorBY);
    var_blockVectorBY = NULL;
    Py_XDECREF(var_gramYBY);
    var_gramYBY = NULL;
    Py_XDECREF(var_blockVectorBX);
    var_blockVectorBX = NULL;
    Py_XDECREF(var_blockVectorAX);
    var_blockVectorAX = NULL;
    Py_XDECREF(var_gramXAX);
    var_gramXAX = NULL;
    Py_XDECREF(var__lambda);
    var__lambda = NULL;
    Py_XDECREF(var_eigBlockVector);
    var_eigBlockVector = NULL;
    Py_XDECREF(var_ii);
    var_ii = NULL;
    Py_XDECREF(var_activeMask);
    var_activeMask = NULL;
    Py_XDECREF(var_lambdaHistory);
    var_lambdaHistory = NULL;
    Py_XDECREF(var_residualNormsHistory);
    var_residualNormsHistory = NULL;
    Py_XDECREF(var_previousBlockSize);
    var_previousBlockSize = NULL;
    Py_XDECREF(var_ident);
    var_ident = NULL;
    Py_XDECREF(var_ident0);
    var_ident0 = NULL;
    Py_XDECREF(var_blockVectorP);
    var_blockVectorP = NULL;
    Py_XDECREF(var_blockVectorAP);
    var_blockVectorAP = NULL;
    Py_XDECREF(var_blockVectorBP);
    var_blockVectorBP = NULL;
    Py_XDECREF(var_iterationNumber);
    var_iterationNumber = NULL;
    Py_XDECREF(var_restart);
    var_restart = NULL;
    var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_blockVectorR);
    var_blockVectorR = NULL;
    Py_XDECREF(var_residualNorms);
    var_residualNorms = NULL;
    Py_XDECREF(var_currentBlockSize);
    var_currentBlockSize = NULL;
    Py_XDECREF(var_activeBlockVectorR);
    var_activeBlockVectorR = NULL;
    Py_XDECREF(var_activeBlockVectorP);
    var_activeBlockVectorP = NULL;
    Py_XDECREF(var_activeBlockVectorAP);
    var_activeBlockVectorAP = NULL;
    Py_XDECREF(var_activeBlockVectorBP);
    var_activeBlockVectorBP = NULL;
    Py_XDECREF(var_activeBlockVectorBR);
    var_activeBlockVectorBR = NULL;
    Py_XDECREF(var_activeBlockVectorAR);
    var_activeBlockVectorAR = NULL;
    Py_XDECREF(var_invR);
    var_invR = NULL;
    Py_XDECREF(var_normal);
    var_normal = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_myeps);
    var_myeps = NULL;
    Py_XDECREF(var_gramXAR);
    var_gramXAR = NULL;
    Py_XDECREF(var_gramRAR);
    var_gramRAR = NULL;
    Py_XDECREF(var_gramXBX);
    var_gramXBX = NULL;
    Py_XDECREF(var_gramRBR);
    var_gramRBR = NULL;
    Py_XDECREF(var_gramXBR);
    var_gramXBR = NULL;
    Py_XDECREF(var__handle_gramA_gramB_verbosity);
    var__handle_gramA_gramB_verbosity = NULL;
    Py_XDECREF(var_gramXAP);
    var_gramXAP = NULL;
    Py_XDECREF(var_gramRAP);
    var_gramRAP = NULL;
    Py_XDECREF(var_gramPAP);
    var_gramPAP = NULL;
    Py_XDECREF(var_gramXBP);
    var_gramXBP = NULL;
    Py_XDECREF(var_gramRBP);
    var_gramRBP = NULL;
    Py_XDECREF(var_gramPBP);
    var_gramPBP = NULL;
    Py_XDECREF(var_gramA);
    var_gramA = NULL;
    Py_XDECREF(var_gramB);
    var_gramB = NULL;
    Py_XDECREF(var_eigBlockVectorX);
    var_eigBlockVectorX = NULL;
    Py_XDECREF(var_eigBlockVectorR);
    var_eigBlockVectorR = NULL;
    Py_XDECREF(var_eigBlockVectorP);
    var_eigBlockVectorP = NULL;
    Py_XDECREF(var_pp);
    var_pp = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_bpp);
    var_bpp = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_31 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_31 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_B);
    par_B = NULL;
    Py_XDECREF(par_M);
    par_M = NULL;
    CHECK_OBJECT(par_maxiter);
    Py_DECREF(par_maxiter);
    par_maxiter = NULL;
    Py_XDECREF(var_blockVectorX);
    var_blockVectorX = NULL;
    Py_XDECREF(var_blockVectorY);
    var_blockVectorY = NULL;
    CHECK_OBJECT(var_residualTolerance);
    Py_DECREF(var_residualTolerance);
    var_residualTolerance = NULL;
    Py_XDECREF(var_sizeY);
    var_sizeY = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_sizeX);
    var_sizeX = NULL;
    Py_XDECREF(var_aux);
    var_aux = NULL;
    Py_XDECREF(var_eigvals);
    var_eigvals = NULL;
    Py_XDECREF(var_A_dense);
    var_A_dense = NULL;
    Py_XDECREF(var_B_dense);
    var_B_dense = NULL;
    Py_XDECREF(var_vals);
    var_vals = NULL;
    Py_XDECREF(var_vecs);
    var_vecs = NULL;
    Py_XDECREF(var_blockVectorBY);
    var_blockVectorBY = NULL;
    Py_XDECREF(var_gramYBY);
    var_gramYBY = NULL;
    Py_XDECREF(var_blockVectorBX);
    var_blockVectorBX = NULL;
    Py_XDECREF(var_blockVectorAX);
    var_blockVectorAX = NULL;
    Py_XDECREF(var_gramXAX);
    var_gramXAX = NULL;
    Py_XDECREF(var__lambda);
    var__lambda = NULL;
    Py_XDECREF(var_eigBlockVector);
    var_eigBlockVector = NULL;
    Py_XDECREF(var_ii);
    var_ii = NULL;
    Py_XDECREF(var_activeMask);
    var_activeMask = NULL;
    Py_XDECREF(var_lambdaHistory);
    var_lambdaHistory = NULL;
    Py_XDECREF(var_residualNormsHistory);
    var_residualNormsHistory = NULL;
    Py_XDECREF(var_previousBlockSize);
    var_previousBlockSize = NULL;
    Py_XDECREF(var_ident);
    var_ident = NULL;
    Py_XDECREF(var_ident0);
    var_ident0 = NULL;
    Py_XDECREF(var_blockVectorP);
    var_blockVectorP = NULL;
    Py_XDECREF(var_blockVectorAP);
    var_blockVectorAP = NULL;
    Py_XDECREF(var_blockVectorBP);
    var_blockVectorBP = NULL;
    Py_XDECREF(var_iterationNumber);
    var_iterationNumber = NULL;
    Py_XDECREF(var_restart);
    var_restart = NULL;
    var_explicitGramFlag = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_blockVectorR);
    var_blockVectorR = NULL;
    Py_XDECREF(var_residualNorms);
    var_residualNorms = NULL;
    Py_XDECREF(var_currentBlockSize);
    var_currentBlockSize = NULL;
    Py_XDECREF(var_activeBlockVectorR);
    var_activeBlockVectorR = NULL;
    Py_XDECREF(var_activeBlockVectorP);
    var_activeBlockVectorP = NULL;
    Py_XDECREF(var_activeBlockVectorAP);
    var_activeBlockVectorAP = NULL;
    Py_XDECREF(var_activeBlockVectorBP);
    var_activeBlockVectorBP = NULL;
    Py_XDECREF(var_activeBlockVectorBR);
    var_activeBlockVectorBR = NULL;
    Py_XDECREF(var_activeBlockVectorAR);
    var_activeBlockVectorAR = NULL;
    Py_XDECREF(var_invR);
    var_invR = NULL;
    Py_XDECREF(var_normal);
    var_normal = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_myeps);
    var_myeps = NULL;
    Py_XDECREF(var_gramXAR);
    var_gramXAR = NULL;
    Py_XDECREF(var_gramRAR);
    var_gramRAR = NULL;
    Py_XDECREF(var_gramXBX);
    var_gramXBX = NULL;
    Py_XDECREF(var_gramRBR);
    var_gramRBR = NULL;
    Py_XDECREF(var_gramXBR);
    var_gramXBR = NULL;
    Py_XDECREF(var__handle_gramA_gramB_verbosity);
    var__handle_gramA_gramB_verbosity = NULL;
    Py_XDECREF(var_gramXAP);
    var_gramXAP = NULL;
    Py_XDECREF(var_gramRAP);
    var_gramRAP = NULL;
    Py_XDECREF(var_gramPAP);
    var_gramPAP = NULL;
    Py_XDECREF(var_gramXBP);
    var_gramXBP = NULL;
    Py_XDECREF(var_gramRBP);
    var_gramRBP = NULL;
    Py_XDECREF(var_gramPBP);
    var_gramPBP = NULL;
    Py_XDECREF(var_gramA);
    var_gramA = NULL;
    Py_XDECREF(var_gramB);
    var_gramB = NULL;
    Py_XDECREF(var_eigBlockVectorX);
    var_eigBlockVectorX = NULL;
    Py_XDECREF(var_eigBlockVectorR);
    var_eigBlockVectorR = NULL;
    Py_XDECREF(var_eigBlockVectorP);
    var_eigBlockVectorP = NULL;
    Py_XDECREF(var_pp);
    var_pp = NULL;
    Py_XDECREF(var_app);
    var_app = NULL;
    Py_XDECREF(var_bpp);
    var_bpp = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_31;
    exception_lineno = exception_keeper_lineno_31;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_Y);
    Py_DECREF(par_Y);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);
    CHECK_OBJECT(par_verbosityLevel);
    Py_DECREF(par_verbosityLevel);
    CHECK_OBJECT(par_retLambdaHistory);
    Py_DECREF(par_retLambdaHistory);
    CHECK_OBJECT(par_retResidualNormsHistory);
    Py_DECREF(par_retResidualNormsHistory);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_X);
    Py_DECREF(par_X);
    CHECK_OBJECT(par_Y);
    Py_DECREF(par_Y);
    CHECK_OBJECT(par_tol);
    Py_DECREF(par_tol);
    CHECK_OBJECT(par_largest);
    Py_DECREF(par_largest);
    CHECK_OBJECT(par_verbosityLevel);
    Py_DECREF(par_verbosityLevel);
    CHECK_OBJECT(par_retLambdaHistory);
    Py_DECREF(par_retLambdaHistory);
    CHECK_OBJECT(par_retResidualNormsHistory);
    Py_DECREF(par_retResidualNormsHistory);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_gramA = python_pars[0];
    PyObject *par_gramB = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity)) {
        Py_XDECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity = MAKE_FUNCTION_FRAME(tstate, code_objects_fe18adb60f8bc220a971083286e97ee3, module_sklearn$externals$_lobpcg, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_type_description == NULL);
    frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity = cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 557;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_1 = const_int_0;
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 557;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = module_var_accessor_sklearn$externals$_lobpcg_$$__report_nonhermitian(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 558;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_gramA);
        tmp_args_element_value_1 = par_gramA;
        tmp_args_element_value_2 = mod_consts[128];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 558;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = module_var_accessor_sklearn$externals$_lobpcg_$$__report_nonhermitian(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[127]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 559;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_gramB);
        tmp_args_element_value_3 = par_gramB;
        tmp_args_element_value_4 = mod_consts[129];
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_frame.f_lineno = 559;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 559;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[77]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 560;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 560;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 562;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[131];
        CHECK_OBJECT(par_gramA);
        tmp_args_element_value_6 = par_gramA;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[130],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 562;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_2 = module_var_accessor_sklearn$externals$_lobpcg_$$_np(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[6]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 563;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[132];
        CHECK_OBJECT(par_gramB);
        tmp_args_element_value_8 = par_gramB;
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_2,
                mod_consts[130],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 563;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity,
        type_description_1,
        par_gramA,
        par_gramB,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity == cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity);
        cache_frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity = NULL;
    }

    assertFrameObject(frame_frame_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_gramA);
    Py_DECREF(par_gramA);
    CHECK_OBJECT(par_gramB);
    Py_DECREF(par_gramB);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_gramA);
    Py_DECREF(par_gramA);
    CHECK_OBJECT(par_gramB);
    Py_DECREF(par_gramB);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_961fb3c53b960eed06eebe60483a57e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__2__as2d(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__2__as2d,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_39a288098a3938319a8091525b0dad3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__3__makeOperator(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__3__makeOperator,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_839b442d4ba86443df5bff33f3b16323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__4__applyConstraints(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__4__applyConstraints,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ac23501a12b11286ad6a040fa57c5fdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f72ae8dcc2695a92c28f542c46a599d0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__6__get_indx(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__6__get_indx,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b1dd65a031246cd950afad417ab4bd8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__7_lobpcg,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78face74fc000836139a2b7523b34baf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        code_objects_fe18adb60f8bc220a971083286e97ee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sklearn$externals$_lobpcg,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_sklearn$externals$_lobpcg[] = {
    impl_sklearn$externals$_lobpcg$$$function__7_lobpcg$$$function__1__handle_gramA_gramB_verbosity,
    impl_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian,
    impl_sklearn$externals$_lobpcg$$$function__2__as2d,
    impl_sklearn$externals$_lobpcg$$$function__3__makeOperator,
    impl_sklearn$externals$_lobpcg$$$function__4__applyConstraints,
    impl_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize,
    impl_sklearn$externals$_lobpcg$$$function__6__get_indx,
    impl_sklearn$externals$_lobpcg$$$function__7_lobpcg,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_sklearn$externals$_lobpcg);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_sklearn$externals$_lobpcg,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_sklearn$externals$_lobpcg,
        sizeof(function_table_sklearn$externals$_lobpcg) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "sklearn.externals._lobpcg";
#endif

// Internal entry point for module code.
PyObject *modulecode_sklearn$externals$_lobpcg(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sklearn$externals$_lobpcg");

    // Store the module for future use.
    module_sklearn$externals$_lobpcg = module;

    moduledict_sklearn$externals$_lobpcg = MODULE_DICT(module_sklearn$externals$_lobpcg);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn$externals$_lobpcg: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("sklearn$externals$_lobpcg: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sklearn$externals$_lobpcg: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.externals._lobpcg" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initsklearn$externals$_lobpcg\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sklearn$externals$_lobpcg,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sklearn$externals$_lobpcg,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[160]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sklearn$externals$_lobpcg,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$externals$_lobpcg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sklearn$externals$_lobpcg,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sklearn$externals$_lobpcg);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sklearn$externals$_lobpcg);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_frame_sklearn$externals$_lobpcg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_2);
    }
    frame_frame_sklearn$externals$_lobpcg = MAKE_MODULE_FRAME(code_objects_544fb7536215a570fe3504730338436d, module_sklearn$externals$_lobpcg);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_sklearn$externals$_lobpcg);
    assert(Py_REFCNT(frame_frame_sklearn$externals$_lobpcg) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_sklearn$externals$_lobpcg_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[136], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_sklearn$externals$_lobpcg_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[137], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[139];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sklearn$externals$_lobpcg;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg->m_frame.f_lineno = 23;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sklearn$externals$_lobpcg;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[140];
        tmp_level_value_2 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg->m_frame.f_lineno = 24;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[33],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[33]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[59],
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[59]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[66],
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[66]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[25],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[25]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[31],
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[31]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[34],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[34]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[141];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sklearn$externals$_lobpcg;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[142];
        tmp_level_value_3 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg->m_frame.f_lineno = 26;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[21],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[139];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sklearn$externals$_lobpcg;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[143];
        tmp_level_value_4 = const_int_0;
        frame_frame_sklearn$externals$_lobpcg->m_frame.f_lineno = 27;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sklearn$externals$_lobpcg,
                mod_consts[144],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_sklearn$externals$_lobpcg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_sklearn$externals$_lobpcg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_sklearn$externals$_lobpcg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_sklearn$externals$_lobpcg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_LIST1(tstate, mod_consts[145]);
        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__1__report_nonhermitian(tstate);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__2__as2d(tstate);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__3__makeOperator(tstate);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__4__applyConstraints(tstate);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[147];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_19 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__5__b_orthonormalize(tstate, tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__6__get_indx(tstate);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[148];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_21 = MAKE_FUNCTION_sklearn$externals$_lobpcg$$$function__7_lobpcg(tstate, tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sklearn$externals$_lobpcg", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "sklearn.externals._lobpcg" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_sklearn$externals$_lobpcg);
    return module_sklearn$externals$_lobpcg;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sklearn$externals$_lobpcg, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sklearn$externals$_lobpcg", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
