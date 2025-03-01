import XCTest
import SwiftTreeSitter
import TreeSitterMeson

final class TreeSitterMesonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_meson())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Meson grammar")
    }
}
